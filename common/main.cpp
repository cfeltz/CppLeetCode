//#include "Stack/Stack.h"
#include "LinkedList/DoublyLinkedList.h"
#include <iostream>


void DLLTest() {
	DoublyLinkedList<int> testDll = DoublyLinkedList<int>();

	Node<int> testNode = Node<int>(2);

	std::cout << "here\n";
	testDll.FrontInsert(&testNode);


	testDll.print();
	std::cout << "\n";
}

int main() {
	DLLTest();

	return 0;
}




/*
	Stack<int> testStack = Stack<int>();

	Node<int> testNode = Node<int>(2);

	testStack.peek();

	testStack.push(&testNode);

	std::cout << testStack.peek()->value;
	std::cout << testStack.pop()->value;

	std::cout << "\n";
*/