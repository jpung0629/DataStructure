#pragma once
#include <iostream>

template<typename T>
class Node {
public:
	Node* next;
	T data;
	Node(Node* next, const T data);
	~Node();
};

template<typename T>
Node<T>::Node(Node* next, const T data)
{
	this->next = next;
	this->data = data;
}

template<typename T>
Node<T>::~Node()
{
}

template<typename T>
class SinglyLinkedList {
	Node<T>* head;
	Node<T>* tail;
	Node<T>* curr;
	int size;
	
public:
	SinglyLinkedList() {
		head = tail = curr = nullptr;
		size = 0;
	}
	;
	~SinglyLinkedList() {
		delete head;
	};
	Node<T>* getHead() {
		return head;
	}
	;
	Node<T>* getTail() {
		return tail;
	};
	Node<T>* getCurr() {
		return curr;
	}
	;
	int getSize() {
		return size;
	}
	;
	Node<T>* get(const int position) {
		if (0 < position && position <= size)
		{
			for (int i = 0; i < position; ++i)
			{
				if (i == 0)
				{
					curr = head;
				}
				else
				{
					curr = curr->next;
				}
			}
			return curr;
		}
		return nullptr;
	};
	Node<T>* find(const T data) {
		curr = head;
		while (curr != nullptr) {
			if (curr->data == data)
			{
				return curr;
			}
			curr = curr->next;
		}
		return nullptr;
	};
	void add(const int position, const T newData) {
		if (0 < position && position <= size + 1)
		{
			// 맨 처음 삽입할 경우
			if (size == 0 && position == 1)
			{
				head = new Node<T>(nullptr, newData);
				tail = head;
			}
			// 나머지 경우 삽입할 경우
			else if (position <= size + 1)
			{
				Node<int>* prev = nullptr;
				for (int i = 0; i < position; ++i)
				{
					if (i == 0)
					{
						prev = nullptr;
						curr = head;
					}
					else
					{
						prev = curr;
						curr = curr->next;
					}
				}
				Node<T>* newNode = new Node<T>(curr, newData);
				if (position == 1) {
					head = newNode;
				}
				else {
					prev->next = newNode;
				}

				if (position == size + 1) tail = newNode;
			}
			size++;
		}
	};
	void remove(const int position) {
		if (0 < position && position <= size)
		{
			Node<T>* prev = nullptr;
			if (position == 1)
			{
				head = head->next;

			}
			else
			{
				for (int i = 0; i < position; ++i)
				{
					if (i == 0)
					{
						prev = head;
						curr = head;
					}
					else
					{
						prev = curr;
						curr = curr->next;
					}
				}
				prev->next = curr->next;
				delete curr;
				if (position == size) tail = prev;
			}
			size -= 1;
		}
	};

	void travesal() {
		curr = head;
		while (curr != nullptr) {
			std::cout << curr->data << ", ";
			curr = curr->next;
		}
		std::cout << '\n';
	};

};


