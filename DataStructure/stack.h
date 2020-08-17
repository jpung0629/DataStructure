#pragma once
#include <iostream>
#include "doubly_linked_list.h"


template <typename T>
class Stack {
	DoublyLinkedList<T>* list;
	int size;

public:
	Stack() : list(new DoublyLinkedList<T>()), size(0) {}

	void push(T data) {
		list->insertEnd(new DoublyNode<T>(data));
		size++;
		print();
	}

	T pop() {
		T data =list->popBack()->data;
		size--;
		print();
		return data;
	}

	T peek() {
		return (list->getTail() != nullptr ? (list->getTail()->data) : NULL);
	}

	int getSize() {
		return size;
	}

	void print() {
		std::cout << "stack: ";
		list->traversal();
	}
};