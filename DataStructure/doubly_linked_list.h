#pragma once
#include <iostream>

template<typename T>
class DoublyNode {
public:
	DoublyNode(DoublyNode<T>* prev, DoublyNode<T>* next, T data): prev(prev), next(next),data(data) {}
	DoublyNode(T data) : data(data), prev(nullptr), next(nullptr) {}
	DoublyNode<T>* prev;
	DoublyNode<T>* next;
	T data;
};
template<typename T>
class DoublyLinkedList {
	DoublyNode<T>* head;
	DoublyNode<T>* tail;
	DoublyNode<T>* curr;

public:
	DoublyNode<T>* getTail() { return tail; }
	DoublyLinkedList(): head(nullptr), tail(nullptr), curr(nullptr) {}
	
	DoublyNode<T>* get(int position) {
		curr = head;
		for (int i = 1; i < position; i++) {
			curr = curr->next;
		}
		return curr;
	}


	DoublyNode<T>* popFront() {
		if (head != nullptr) {
			DoublyNode<T>* prevHead = head;
			head = head->next;
			if (head != nullptr) { head->prev = nullptr; }
			else { tail = nullptr; }
			return prevHead;
		}
		return nullptr;
	};

	DoublyNode<T>* popBack() {
		if (tail != nullptr) {
			DoublyNode<T>* prevTail = tail;
			tail = tail->prev;
			if (tail != nullptr) { tail->next = nullptr; }
			else { head = nullptr; }
			return prevTail;
		}
		return nullptr;
	};
	void insertAfter(DoublyNode<T>* node, DoublyNode<T>* newNode) {
		curr = head;
		while (curr != node && curr->next != nullptr) {
			curr = curr->next;
		}
		DoublyNode<T>* next = curr->next;
		curr->next = newNode;
		newNode->prev = curr;
		newNode->next = next;
		if (next != nullptr) { next->prev = newNode; }
		else { tail = newNode; }
	}

	void insertBefore(DoublyNode<T>* node, DoublyNode<T>* newNode) {
		curr = head;
		while (curr != node && curr->next != nullptr) {
			curr = curr->next;
		}
		DoublyNode<T>* prev = curr->prev;
		newNode->prev = prev;
		newNode->next = curr;
		curr->prev = newNode;
		if (prev != nullptr) { prev->next = newNode; }
		else { head = newNode; }
	}

	void insertBeginning(DoublyNode<T>* node) {
		DoublyNode<T>* prevHead = head;
		head = node;
		node->next = prevHead;
		node->prev = nullptr;
		if (prevHead != nullptr) { prevHead->prev = head; }
		if (tail == nullptr) { tail = head; }
	}

	void insertEnd(DoublyNode<T>* node) {
		DoublyNode<T>* prevTail = tail;
		tail = node;
		node->next = nullptr;
		node->prev = prevTail;
		if (prevTail != nullptr) { prevTail->next = tail; }
		if (head == nullptr) { head = tail; }
	}
	void traversal() {
		curr = head;
		std::cout << "traversal: [ ";
		while (curr != nullptr) {
			std::cout << curr->data << ((curr == tail) ? "" : ", ");
			curr = curr->next;
		}
		std::cout << " ] \n";
	}
	void reverseTraversal() {
		curr = tail;
		std::cout << "reverseTraversal: [ ";
		while (curr != nullptr) {
			std::cout << curr->data << ((curr == head) ? " ]" : ", ");
			curr = curr->prev;
		}
		std::cout << "\n";
	}
};