#include <iostream>
#include "../Node/Node.h"

typedef unsigned int uint;

template <typename T>
class Stack {
	Node<T>* cursor;
	uint size;
	
public:
	Stack();
	~Stack();

	Node<T>* pop();
	void  push(Node<T>* newNode);
	Node<T>* peek();
};


template <typename T>
Stack<T>::Stack() : cursor(nullptr), size(0) {}

template <typename T>
Stack<T>::~Stack() {
	cursor = nullptr;
	size = 0;
}

template <typename T>
Node<T>* Stack<T>::pop() {
	if (size > 0) {
		size--;
		Node<T>* topNode = cursor;
		cursor = cursor->previousNode;
		return topNode;
	}
	else {
		std::cout << "attempted to pop, but the stack is empty\n";
		return nullptr;
	}
}

template <typename T>
void Stack<T>::push(Node<T>* newNode) {
	if (cursor != nullptr) {
		cursor->nextNode = newNode;
	}
	cursor = newNode;
	size++;
}

template <typename T>
Node<T>* Stack<T>::peek() {
	if (size > 0) {
		return cursor;
	}
	else {
		std::cout << "attempted to peek, but the stack is empty\n";
		return nullptr;
	}
}