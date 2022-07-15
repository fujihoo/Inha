#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib")

#define Buf_Size 1024
void Error(const char* msg);
void Log(const char* msg);
void Server_Code();

char strServerIP[] = "172.30.1.32";
// "127.0.0.1" 로컬에서 자기 자신을 뜻함
char strPort[] = "12345"; // 1024 이하의 포트는 사용하지 말기 이미 사용중일 가능성

int main()
{
	Server_Code();
	return 0;
}

void Error(const char* msg)
{
	fputs(msg, stderr);
	fputc('\n', stderr);
	exit(1);
}

void Log(const char* msg)
{
	fputs(msg, stdout);
	fputc('\n', stdout);
}

void Server_Code()
{
	WSADATA wsaData;
	SOCKET serverSocket, clientSocket;
	char msg[Buf_Size];
	int strlength, i;

	SOCKADDR_IN serverAddr, clientAddr;
	int clientAddrSize;

	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
		Error("WSAStartuo() Error");
	serverSocket = socket(PF_INET, SOCK_STREAM, 0);
	if (serverSocket == INVALID_SOCKET)
		Error("Socket() Error");
	
	memset(&serverAddr, 0, sizeof(serverAddr));

	serverAddr.sin_family = AF_INET;
	serverAddr.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
	serverAddr.sin_port = htons(atoi(strPort));

	if (bind(serverSocket, (SOCKADDR*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR)
		Error("bind() Error");

	Log("bind() OK");

	if (listen(serverSocket, SOMAXCONN) == SOCKET_ERROR)
		Error("listen() error");

	Log("listen() OK");

	clientAddrSize = sizeof(clientAddr);
	for (int i = 0; i < SOMAXCONN; i++)
	{
		clientSocket = accept(serverSocket,
			(SOCKADDR*) & clientAddr, & clientAddrSize);
		Log("Accept()... ");

		if (clientSocket == SOCKET_ERROR)
			Error("accept() Error");
		else
			printf("Connected client %d\n", i + 1);
		
		memset(msg, 0, sizeof(msg));
		while ((strlength = recv(clientSocket, msg, Buf_Size, 0)) != 0)
		{
			printf("%d client : %s", i + 1, msg);
			send(clientSocket, msg, strlength, 0);
		}
		closesocket(clientSocket);
	}

	closesocket(serverSocket);
	WSACleanup();
	Log("Fininsh...");
}
