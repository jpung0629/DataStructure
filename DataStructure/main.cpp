#include "LinkedList.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

}

void testLinkedList() {
	LinkedList linkedList = LinkedList();

	linkedList.addBack(2);
	linkedList.addBack(3);
	linkedList.addBack(1);
	linkedList.traversal();
}