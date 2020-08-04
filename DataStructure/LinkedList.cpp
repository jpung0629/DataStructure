#include "LinkedList.h"
#include <iostream>
LinkedList::LinkedList() {
	head = new Node(nullptr, NULL);

}
LinkedList::~LinkedList() {
	delete head;
}

bool LinkedList::addBack(int value) {
	Node* currentNode = head;
	while (currentNode->getNext() != nullptr) {
		currentNode = currentNode->getNext();
	}
	currentNode->setNext(new Node(nullptr, value));
	return true;
}

//bool LinkedList::addFront(int value) {
//	Node* prevHead = head;
//	head = new Node(prevHead, value);
//}

bool LinkedList::removeBefore(Node* node) {
	Node* prevNode = head;
	Node* currentNode = head;
	while (currentNode->getNext() != node && currentNode->getNext() != nullptr) {
		prevNode = currentNode;
		currentNode = currentNode->getNext();
	}
	if (prevNode == currentNode || currentNode->getNext() == nullptr) return false;
	else {
		prevNode->setNext(currentNode->getNext());
		return true;
	}
}

void LinkedList::traversal() {
	Node* currentNode = head->getNext();
	while (currentNode != nullptr) {
		std::cout << currentNode->getValue() << ", ";
		currentNode = currentNode->getNext();
	}
}

Node* LinkedList::find(int value) {
	Node* currentNode = head;
	while (currentNode != nullptr) {
		if (currentNode->getValue() == value) return currentNode;
		currentNode = currentNode->getNext();
	}
}