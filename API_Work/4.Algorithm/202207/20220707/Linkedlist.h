#pragma once
#include <iostream>
using namespace std;

struct Node
{
	int data;
	struct Node* link;	// �� ����ü ��ü�� ����Ű�� �������̹Ƿ� struct�� ����
};

struct HeadNode
{
	Node* head;			// Node�� ����Ű�� ������, head
};

class Singlelist
{
public:
	// ����Ʈ ����, �����
	HeadNode* createList()
	{
		HeadNode* H = new HeadNode;	// HeadNode�� ����Ű�� ������, H
		H->head = NULL;
		return H;
	}
	// ����Ʈ�� �������� ��� ����
	void addNode(HeadNode* H, int x)
	{
		Node* NewNode = new Node;	// ���� ���� ���
		Node* LastNode;				// ���� �ִ� ����� ������ ���
		NewNode->data = x;
		NewNode->link = NULL;

		if (H->head == NULL)
		{
			H->head = NewNode;
			return;
		}
		LastNode = H->head;			// ����Ʈ�� ������� ���� ��쿡 ���Ḯ��Ʈ�� ���� ó�� ��尡 LastNode�� ����Ű�� �Ѵ�.
		while (LastNode->link != NULL)
		{
			LastNode = LastNode->link;	// ���� ����Ʈ�� ������ ��带 ã�� ����
		}
		LastNode->link != NewNode;	// ������ ��带 ã�� while���� ������ �ڿ� �� ��带 ����Ű�� �Ѵ�.
	}

	// ����Ʈ�� ������ ��� ����
	void deleteNode(HeadNode* H)
	{
		Node* prevNode;				// �����Ǵ� ����� �� ���
	}
};
