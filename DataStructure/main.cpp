#include "singly_linked_list.h"
#include <iostream>
using namespace std;

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

int main() {
	testSinglyLinkedList();
}

