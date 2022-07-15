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
void Client_Code();

char strServerIP[] = "172.30.1.32";
char strClientIP[] = "127.0.0.1";
char strPort[] = "12345";

int main()
{
	Client_Code();
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

void Client_Code()
{
	WSADATA wsaData;
	SOCKET serverSocket;
	char msg[Buf_Size];
	int strLength;

	SOCKADDR_IN serverAddr;
	int clientAddrSize;

	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
		Error("WSAStartuo() Error");

	Log("Start...");

	serverSocket = socket(PF_INET, SOCK_STREAM, 0);
	if (serverSocket == INVALID_SOCKET)
		Error("Socket() Error");

	Log("Socket OK");

	memset(&serverAddr, 0, sizeof(serverAddr));

	serverAddr.sin_family = AF_INET;
	serverAddr.sin_addr.S_un.S_addr = inet_addr(strServerIP);
	serverAddr.sin_port = htons(atoi(strPort));

	if (connect(serverSocket, (SOCKADDR*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR)
		Error("connect() Error");

	puts("Connected...");

	while (1)
	{
		fputs("Input Message(Q to quit):", stdout);
		fgets(msg, Buf_Size, stdin);
		if (!strcmp(msg, "q\n") || !strcmp(msg, "Q\n"))
			break;

		send(serverSocket, msg, strlen(msg), 0);
		strLength = recv(serverSocket, msg, Buf_Size - 1, 0);
		msg[strLength] = 0;
		printf("Message from server : %s\n", msg);
	}

	closesocket(serverSocket);
	WSACleanup();
}