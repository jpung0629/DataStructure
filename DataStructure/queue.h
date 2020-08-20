#pragma once
#include "doubly_linked_list.h"

template<typename T>
class Queue {
	DoublyLinkedList<T>* list;
	int size;

public:
	Queue() :list(new DoublyLinkedList<T>()), size(0) {}

	T pop() {
		DoublyNode<T>* node = list->popFront();
		size--;
		print();
		return node->data;
	}

	void push(T data) {
		list->insertEnd(new DoublyNode<T>(data));
		print();
		size++;
	}

	int getSize() {
		return size;
	}

	void print() {
		std::cout << "Queue: ";
		list->traversal();
	}
};