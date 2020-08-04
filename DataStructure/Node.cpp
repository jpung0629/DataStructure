#include "Node.h"

Node::Node(Node* next, int value) {
	this->next = next;
	this->value = value;
}

Node::~Node() {
	delete next;
}

Node* Node::getNext() { return next; }

int Node::getValue() { return value; }

void Node::setNext(Node* node) {
	next = node;
}

void Node::setValue(int value) {
	this->value = value;
}