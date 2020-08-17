#include "singly_linked_list.h"
#include "doubly_linked_list.h"
#include "stack.h"
#include <iostream>
using namespace std;

void testSinglyLinkedList();
void testDoublyLinkedList();
void testStack();

int main() {
	testSinglyLinkedList();
	testDoublyLinkedList();
	testStack();
}

void testSinglyLinkedList() {
	SinglyLinkedList<int>* list = new SinglyLinkedList<int>();

	list->add(1, 2);
	list->add(1, 3);
	list->remove(1);
	list->remove(1);

	list->add(1, 2);
	list->add(1, 3);
	list->add(3, 2);
	list->add(3, 4);
	list->add(5, 10);
	list->travesal();
	list->remove(1);
	list->remove(4);
	list->remove(2);
	list->travesal();
	list->add(3, 1);
	list->add(2, 2);
	list->travesal();
}

void testDoublyLinkedList() {
	DoublyLinkedList<int> list;

	list.insertBeginning(new DoublyNode<int>(2));
	list.insertBeginning(new DoublyNode<int>(4));
	list.insertEnd(new DoublyNode<int>(1));

	list.insertAfter(list.get(3), new DoublyNode<int>(5));
	list.insertBefore(list.get(4), new DoublyNode<int>(7));
	list.insertBefore(list.get(0), new DoublyNode<int>(10));
	list.insertAfter(list.get(6), new DoublyNode<int>(12));
	list.traversal();
	std::cout << std::endl;
	std::cout << list.popFront()->data << std::endl;
	std::cout << list.popBack()->data << std::endl;
	list.traversal();
	list.reverseTraversal();
}

void testStack() {
	Stack<int> stack;
	stack.push(1);
	stack.push(2);
	stack.push(4);
	stack.pop();
	std::cout << stack.getSize() << '\n';
	stack.pop();
	stack.pop();
	std::cout << stack.peek() << std::endl;
}