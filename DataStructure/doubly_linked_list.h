#pragma once
#include <iostream>

template<typename T>
class Node {
public:
	Node(Node<T>* prev, Node<T>* next, T data): prev(prev), next(next),data(data) {}
	Node<T>* prev;
	Node<T>* next;
	T data;
};

template<typename T>
class DoublyLinkedList {
	Node<T>* head;
	Node<T>* tail;
	Node<T>* curr;

public:
	DoublyLinkedList(): head(nullptr), tail(nullptr), curr(nullptr) {}
	Node<T>* get(int position) {}
	void insertAfter(Node<T> node, Node<T> newNode) {}
	void insertBefore(Node<T> node, Node<T> newNode) {}
	void insertBeginning(Node<T> node) {}
	void insertEnd(Node<T> node) {}
	void remove(Node<T> node) {}
	void traversal() {}
	void reverseTraversal() {}
};