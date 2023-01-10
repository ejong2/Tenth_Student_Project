#include <iostream>
#include <winsock2.h>

#pragma comment (lib, "ws2_32.lib")

using namespace std;

int main()
{
	WSADATA wsaData;

	SOCKET ServerSocket;
	fd_set temp_fdset;
	fd_set read_fdset;
	sockaddr_in ServerSocketAddr;
	sockaddr_in ClientSockAddr;

	char Buffer[1024];

	int RecvBytes;
	int addr_len;

	unsigned int i = 0;
	unsigned int currentfd_num = 0;


	//setup
	WSAStartup(MAKEWORD(2, 2), &wsaData);
	ServerSocket = socket(AF_INET, SOCK_STREAM, 0);

	memset(&ServerSocketAddr, 0, sizeof(ServerSocketAddr));

	ServerSocketAddr.sin_addr.S_un.S_addr = INADDR_ANY;
	ServerSocketAddr.sin_family = PF_INET;
	ServerSocketAddr.sin_port = htons(7476);

	bind(ServerSocket, reinterpret_cast<sockaddr*>(&ServerSocketAddr), sizeof(ServerSocketAddr));

	listen(ServerSocket, 0);
	
	FD_ZERO(&read_fdset);
	FD_SET(ServerSocket, &read_fdset);

	cout << "now Listenning..." << endl;

	while (1)
	{
		//select �Լ��� ȣ��Ϸ�Ǹ�, ��ȭ�� fd���� �̿��� ���� �ʱ�ȭ�ȴ�.
		//���� ������ fd_set �����͸� temp_fds�� �����ؾ��Ѵ�. (���ʿ��� �� fd_set���� ����ȴ�)
		temp_fdset = read_fdset;
		
		// ���ٸ� Ÿ�Ӿƿ��� �����Ƿ�, 
		//select �Լ��� �Է��� ���������� Blocking�Ǿ� ����Ѵ�.
		currentfd_num = select(0, &temp_fdset, NULL, NULL, NULL);

		for (i = 0; i <= temp_fdset.fd_count; ++i)
		{
			SOCKET currentSocket = temp_fdset.fd_array[i];

			if (FD_ISSET(currentSocket, &temp_fdset))
			{
				//�������
				if (currentSocket == ServerSocket)
				{
					addr_len = sizeof(sockaddr_in);
					cout << "new connection arrival" << endl;

					SOCKET clientSocket = accept(ServerSocket, reinterpret_cast<sockaddr*>(&ClientSockAddr), &addr_len);

					// ����� Ŭ���̾�Ʈ ���������� read_fdset�� �߰�
					FD_SET(clientSocket, &read_fdset);

				}
				//������ ����� ���Ͽ��� �޽��� ������
				else
				{
					memset(Buffer, 0, 1024);
					RecvBytes = recv(currentSocket, Buffer, 1024, 0);
					if (RecvBytes <= 0)
					{	//disconnect
						cout << "Disconnected" << endl;
						closesocket(currentSocket);

						//���� ������ read_fdset���� ����
						FD_CLR(currentSocket, &read_fdset);
					}
					else
					{
						cout << "Recieved Message : " << Buffer << endl;
						send(currentSocket, Buffer, RecvBytes, 0);
					}

				}
				if (--currentfd_num <= 0) { break; }
			}
		}

	}





	closesocket(ServerSocket);
	WSACleanup();


	return 0;
}