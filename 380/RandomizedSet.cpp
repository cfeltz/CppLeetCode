#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <set>

class Node {
public:
	Node* next;
	Node* previous;
    int value;

    Node(int val) {
        value = val;
    }
        
    void insert(Node* nextNode) {
        this->next = nextNode;
    }

    void remove() {
        this->next->previous = this->previous;
        this->previous->next = this->next;
    }
};

class RandomizedSet {
public:
	std::set<int> values;
	Node* cursor;
    RandomizedSet() {
    }

    bool insert(int val) {
        std::pair<std::set<int>::iterator, bool> result;
        result = values.insert(val);
        if (result.second) {
            Node newNode = new Node(val);
            (*cursor).insert(&newNode);
        }
        return true;
    }

    bool remove(int val) {
        std::pair<std::set<int>::iterator, bool> result;
        result = values.erase(val);
        if (result.second) {
            while (cursor != NULL && cursor->value != val) {
                cursor = cursor->next;
            }

            if (values.size() > 1) {
				cursor = cursor->next;
            }
			cursor->remove();
        }
        return result.second;
    }

    int getRandom() {
        //int index = rand() % backing.size();
        //return backing.;
    }
};




void readFile(std::string filename) {
    // constructor is default calling .open on filename
    std::ifstream file(filename);

	std::string fileContents;
    while (file.good()) {
        std::string buffer;
        buffer = file.get();
		fileContents.append(buffer);
    }
	std::cout << fileContents;
}




/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

// hash map of indices to values
// hash map of values to indices
/*
    remove
        removes the indice value pair
        removes the value indice pair

    insert
        checks to see if the value is already in teh value indice map
*/
