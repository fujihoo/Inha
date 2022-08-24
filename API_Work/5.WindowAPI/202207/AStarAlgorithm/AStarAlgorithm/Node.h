#pragma once
enum NODETYPE { NONE, START, END, WALL, NODETYPE_END};
struct Node
{
	POINT ptPosition;
	int g = 0;
	int h = -1;
	int f = g + h;
	NODETYPE type = NODETYPE::NONE;
	Node* ParentNode = nullptr;
};

bool operator==(POINT a, POINT b)
{
	return (a.x == b.x && a.y == b.y);
}

bool IsSame(Node a, Node b)
{
	return a.ptPosition == b.ptPosition;
}