CC = g++

all: main run

main: main.cpp Stack/Stack.h
	${CC} main.cpp -o main  Stack/Stack.h

stack: main.cpp Stack/Stack.h
	${CC} main.cpp -o main  Stack/Stack.h

dll: main.cpp LinkedList/DoublyLinkedList.h
	${CC} main.cpp -o main  LinkedList/DoublyLinkedList.h

run: main
	./main
	
clean:
	rm -rf main
	