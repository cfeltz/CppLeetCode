#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "../../Problems/AddTwoNumbers/AddTwoNumbers.h"
#include "../Test.h"
#include "AddTwoNumbers_Test.h"

// lists in the file are in the form of
// l1 = [<contents>], l2 = [<contents>]
void AddTwoNumbers_Test::addTwoNumbersTest(){
    std::ifstream istrm("AddTwoNumbers_Input.txt");
};

// create a queue of test objects
// could use a state machine for reading the inputs in

enum STATE {
    READING_INPUT,
    
};