#pragma once
#include "Node.h"

class LinkedList {
public:
	LinkedList();
	~LinkedList();
	bool addBack(int value);
	//bool addFront(int value);
	bool removeBefore(Node* node);
	//bool removeAfter(Node* node);
	Node* find(int value);
	void traversal();
private:
	Node* head;
};