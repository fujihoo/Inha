#include <iostream>

struct linked_list_node
{
	int data;
	struct linked_list_node* link;
};

void addNode(linkedList_h* H, int x)
{
	listNode* NewNode;
	listNode* LastNode;
	NewNode = (listNode*)malloc(sizeof(listNode));
	NewNode->data = x;
	NewNode->link = NULL;
}

void addNode(linkedList_h* H, int x)
{
	if (H->head == NULL)
	{
		H->head = NewNode;
		return;
	}
	LastNode = H->head;
	while (LastNode->link != NULL)
	{
		LastNode = LastNode->link;
	}
	LastNode->link = NewNode;
}
