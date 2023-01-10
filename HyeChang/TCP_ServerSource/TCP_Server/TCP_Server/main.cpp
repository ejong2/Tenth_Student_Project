// ȸ������ ���� 

#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <iostream>
#include <stdlib.h>

#include <WinSock2.h>

#include "jdbc/mysql_connection.h"
#include "jdbc/cppconn/driver.h"
#include "jdbc/cppconn/exception.h"
#include "jdbc/cppconn/prepared_statement.h"

#pragma comment(lib, "WS2_32.lib")
#pragma comment (lib, "mysqlcppconn.lib")

#define PORT 19934
#define IP_ADDRESS "127.0.0.1"
#define PACKET_SIZE 60

using namespace std;

const string server = "tcp://127.0.0.1:3306";
const string username = "root";
const string password = "1234";

sql::Driver* driver = nullptr;
sql::Connection* con = nullptr;
sql::Statement* stmt = nullptr;
sql::PreparedStatement* pstmt = nullptr;
sql::ResultSet* rs = nullptr;

SOCKET CS;

CRITICAL_SECTION CS_DB_HANDLER;

void LoginProcess(SOCKET ClientSocket)
{
	cout << "LoginProcess �Լ� ����" << '\n';

	char IdBuffer[PACKET_SIZE] = { 0, };
	char PwdBuffer[PACKET_SIZE] = { 0, };
	char LoginSuccessBuffer[PACKET_SIZE] = "Success";

	int RecvBytes = recv(ClientSocket, IdBuffer, sizeof(IdBuffer), 0);
	if (RecvBytes <= 0)
	{
		cout << "Ŭ���̾�Ʈ ���� ���� : " << ClientSocket << '\n';

		closesocket(ClientSocket);
	}

	string strID = IdBuffer;

	RecvBytes = recv(ClientSocket, PwdBuffer, sizeof(PwdBuffer), 0);
	if (RecvBytes <= 0)
	{
		cout << "Ŭ���̾�Ʈ ���� ���� : " << ClientSocket << '\n';
		closesocket(ClientSocket);
	}

	string strPWD = PwdBuffer;

	pstmt = con->prepareStatement("INSERT INTO LoginTable(`ID`,`PWD`) VALUES(?, ?)");
	pstmt->setString(1, strID);
	pstmt->setString(2, strPWD);
	pstmt->execute();

	int SendBytes = send(ClientSocket, LoginSuccessBuffer, sizeof(LoginSuccessBuffer), 0);
}

void MoveProcess(SOCKET ClientSocket)
{
	char MoveSuccessBuffer[PACKET_SIZE] = "Move";

	int SendBytes = send(ClientSocket, MoveSuccessBuffer, sizeof(MoveSuccessBuffer), 0);
}

void MoveEndProcess(SOCKET ClientSocket)
{
	char MoveEndBuffer[PACKET_SIZE] = "MoveEnd";

	int SendBytes = send(ClientSocket, MoveEndBuffer, sizeof(MoveEndBuffer), 0);
}

int main()
{
    driver = get_driver_instance();
    con = driver->connect(server, username, password);
    con->setSchema("UE4SERVER");

    cout << "[ȸ������ ���� Ȱ��ȭ]" << '\n';

    WSADATA WSAData;
    WSAStartup(MAKEWORD(2, 2), &WSAData);
    SOCKET SS = socket(AF_INET, SOCK_STREAM, 0);

    SOCKADDR_IN SA = { 0, };
    SA.sin_family = AF_INET;
    SA.sin_addr.S_un.S_addr = inet_addr(IP_ADDRESS);
    SA.sin_port = htons(PORT);

    if (::bind(SS, (SOCKADDR*)&SA, sizeof(SA)) != 0) { exit(-3); };
    if (listen(SS, SOMAXCONN) == SOCKET_ERROR) { exit(-4); };

    cout << "Ŭ���̾�Ʈ ������ ��ٸ��� ���Դϴ�......." << '\n';

	fd_set Reads;
	fd_set Copys;
	FD_ZERO(&Reads);

	FD_SET(SS, &Reads);

	TIMEVAL TimeOut;
	TimeOut.tv_sec = 1;
	TimeOut.tv_usec = 10;

	while (true)
	{
		Copys = Reads;

		int fd_num = select(0, &Copys, 0, 0, &TimeOut);

		for (int i = 0; i < (int)Reads.fd_count; i++)
		{
			if (FD_ISSET(Reads.fd_array[i], &Copys))
			{
				if (Reads.fd_array[i] == SS)
				{
					SOCKADDR_IN CA;
					memset(&CA, 0, sizeof(CA));
					int sizeCA = sizeof(CA);
					CS = accept(SS, (SOCKADDR*)&CA, &sizeCA);

					FD_SET(CS, &Reads);
					cout << "CONNECT : " << CS << '\n';
				}
				else
				{
					char RecvBuffer[PACKET_SIZE] = { 0, };
					int RecvBytes = recv(Reads.fd_array[i], RecvBuffer, sizeof(RecvBuffer) - 1, 0);

					string str = RecvBuffer;

					// �α��� ó�� �Լ� ����
					if (str == "LoginPack")
					{
						LoginProcess(CS);
					}
					
					// Move ó�� �Լ� ����
					if (str == "MoveBuffer")
					{
						MoveProcess(CS);
					}

					// MoveEnd ó�� �Լ� ����
					if (str == "EndBuffer")
					{
						MoveEndProcess(CS);
					}

					// �÷��̾� ����
					if (RecvBytes <= 0)
					{
						cout << "DISCONNECT : " << Reads.fd_array[i] << '\n';
						SOCKET DS = Reads.fd_array[i];
						FD_CLR(DS, &Reads);
						closesocket(DS);
						break;
					}
				}
			}
		}
	}

    WSACleanup();
}

