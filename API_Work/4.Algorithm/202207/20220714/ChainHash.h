#pragma once
#include "Member.h"

class Node
{
private:
	Member data;
	Node* next;
public:
	static void SetNode(Node* n, const Member* x, Node* next);
};

class ChainHash
{
	private:
	int size;
	Node** table;

public:
	int Initialize(ChainHash* h, int size);
	Node* Search(const ChainHash* h, const Member* x);
	int Add(ChainHash* h, const Member* x);
	int Remove(ChainHash* h, const Member* x);
	void Dump(const ChainHash* h);
	void Clear(ChainHash* h);
	void Terminate(ChainHash* h);
};