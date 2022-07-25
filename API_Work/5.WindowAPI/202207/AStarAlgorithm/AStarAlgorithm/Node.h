#pragma once

struct Node
{
	int g=0;
	int h=-1;
	int f = g + h;
	Node* ParentNode = nullptr;
};