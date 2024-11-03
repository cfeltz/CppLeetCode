#include <iostream>
#include "../Node/Node.h"

typedef unsigned int uint;

template <typename T>
class DoublyLinkedList {
	Node<T>* front;
	Node<T>* rear;
	uint size;

public:
	DoublyLinkedList();
	~DoublyLinkedList();

	void RearInsert(Node<T>* newRear);
	void FrontInsert(Node<T>* newFront);
	void print();
};

template <typename T>
DoublyLinkedList<T>::DoublyLinkedList() : front(nullptr), rear(nullptr), size(0) {}

template <typename T>
DoublyLinkedList<T>::~DoublyLinkedList() {
	front = nullptr;
	rear = nullptr;
	size = 0;
}

template <typename T>
void DoublyLinkedList<T>::RearInsert(Node<T>* newRear) {
	if (front == nullptr && rear == nullptr) {
		front = newRear;
		rear = newRear;
		size++;
		return;
	}
	
	rear->previousNode = newRear;
	newRear->nextNode = rear;
	rear = newRear;
	size++;
}

template <typename T>
void DoublyLinkedList<T>::FrontInsert(Node<T>* newFront) {
	if (rear == nullptr && front == nullptr) {
		rear = newFront;
		front = newFront;
		size++;
		return;
	}
	
	front->nextNode = newFront;
	newFront->previousNode = front;
	front = newFront;
	size++;
	std::cout << "here\n";
}


template <typename T>
void DoublyLinkedList<T>::print() {
	Node<T>* cursor = rear;
	while (cursor != nullptr) {
		std::cout << cursor->value;
		std::cout << "\n";
		cursor = cursor->nextNode;
	}
}
