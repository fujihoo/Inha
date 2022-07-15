#pragma once
#include <iostream>
using namespace std;

struct Node
{
	int data;
	struct Node* link;	// 이 구조체 자체를 가리키는 포인터이므로 struct로 선언
};

struct HeadNode
{
	Node* head;			// Node를 가리키는 포인터, head
};

class Singlelist
{
public:
	// 리스트 생성, 헤드노드
	HeadNode* createList()
	{
		HeadNode* H = new HeadNode;	// HeadNode를 가리키는 포인터, H
		H->head = NULL;
		return H;
	}
	// 리스트의 마지막에 노드 삽입
	void addNode(HeadNode* H, int x)
	{
		Node* NewNode = new Node;	// 새로 만들 노드
		Node* LastNode;				// 원래 있던 노드의 마지막 노드
		NewNode->data = x;
		NewNode->link = NULL;

		if (H->head == NULL)
		{
			H->head = NewNode;
			return;
		}
		LastNode = H->head;			// 리스트가 비어있지 않은 경우에 연결리스트의 가장 처음 노드가 LastNode를 가리키게 한다.
		while (LastNode->link != NULL)
		{
			LastNode = LastNode->link;	// 연결 리스트의 마지막 노드를 찾는 과정
		}
		LastNode->link != NewNode;	// 마지막 노드를 찾고 while문을 나오면 뒤에 새 노드를 가리키게 한다.
	}

	// 리스트의 마지막 노드 삭제
	void deleteNode(HeadNode* H)
	{
		Node* prevNode;				// 삭제되는 노드의 앞 노드
	}
};
