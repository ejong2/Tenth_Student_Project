#include <iostream>

// ������ ����ϱ� ���� ���̺귯��
#include <WinSock2.h>

// ���� ���̺귯�� ����
#pragma comment (lib, "ws2_32.lib")
using namespace std;

int main()
{
	// ���� ���� ������ ����
	WSADATA wsaData;

	// ���� �ʱ�ȭ (����)
	int Result = WSAStartup(MAKEWORD(2, 2), &wsaData);

	// Internet�� Stream ������� ���� ����
	SOCKET ServerSocket = socket(AF_INET, SOCK_STREAM, 0);

	// ���� �ּ� ����
	SOCKADDR_IN ServerSockAddr;
	
	// ����ü �ʱ�ȭ
	memset(&ServerSockAddr, 0, sizeof(ServerSockAddr));

	// ������ Internet Ÿ��
	ServerSockAddr.sin_family = PF_INET;
	
	// INADDR_ANY�� ��� ȣ��Ʈ�� 127.0.0.1�� ��Ƶ� �ǰ� localhost�� ��Ƶ� �ȴ�.
	ServerSockAddr.sin_addr.S_un.S_addr = htonl(INADDR_ANY);

	// ���� ��Ʈ ����
	ServerSockAddr.sin_port = htons(4949);

	// ������ ���� ������ ���Ͽ� ���ε��Ѵ�.
	int Status = bind(ServerSocket, (SOCKADDR*)&ServerSockAddr, sizeof(ServerSockAddr));

	// ������ ��� ���·� ��ٸ���.
	Status = listen(ServerSocket, 0);


	// Ŭ���̾�Ʈ ���� ���� �� ������ ���� ����ü ����, Ŭ���̾�Ʈ�� ������ ��û�ϸ� ����
	SOCKADDR_IN ClientAddrIn;
	memset(&ClientAddrIn, 0, sizeof(SOCKADDR_IN));
	int ClientLength = sizeof(ClientAddrIn);
	

	cout << "Server Start" << endl;



	while (true)
	{

		SOCKET ClientSocket = accept(ServerSocket, (SOCKADDR*)&ClientAddrIn, &ClientLength);
		cout << "���� ��... " << endl;

		
	}

	closesocket(ServerSocket);

	WSACleanup();
}