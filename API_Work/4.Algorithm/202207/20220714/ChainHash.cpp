#include "ChainHash.h"

static int hash(int key, int size)
{
	return key % size;
}

void Node::SetNode(Node* n, const Member* x, Node* next)
{
	n->data = *x;
	n->next = next;
}

int ChainHash::Initialize(ChainHash* h, int size)
{
	int i;
	h->table = new Node*[size];
	if (h->table == nullptr)
	return 0;
}

Node* ChainHash::Search(const ChainHash* h, const Member* x)
{
	int key = hash(
	return nullptr;
}

int ChainHash::Add(ChainHash* h, const Member* x)
{
	return 0;
}

int ChainHash::Remove(ChainHash* h, const Member* x)
{
	return 0;
}

void ChainHash::Dump(const ChainHash* h)
{
}

void ChainHash::Clear(ChainHash* h)
{
}

void ChainHash::Terminate(ChainHash* h)
{
}
