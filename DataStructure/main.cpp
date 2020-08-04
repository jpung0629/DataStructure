#include "LinkedList.h"
#include <iostream>

using namespace std;

void testLinkedList();

int main(int argc, char** argv) {
	testLinkedList();
}

void testLinkedList() {
	LinkedList linkedList = LinkedList();

	linkedList.addBack(2);
	linkedList.addBack(3);
	linkedList.addBack(1);
	linkedList.traversal();
	Node* node = linkedList.find(4);
	node = linkedList.find(1);
	if (node != nullptr) {
		linkedList.removeBefore(node);
	}
	linkedList.traversal();
}