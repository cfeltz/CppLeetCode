#include "../../TwoSum/TwoSum.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "../Test.h"
#include "TwoSum_Test.h"
// so the goal here is to read the line
// then parse the ints from the line
// if its the second line we know that it's just one int

void TwoSum_Test::twoSumTest(){
    std::ifstream istrm("TwoSum_Input.txt"); 
    std::vector<int> nums;
    std::vector<int> expected;
    int target;
    int flag = 0;

    while(!istrm.eof()){
        std::string line; 
        std::getline(istrm, line);
        Test t;
        if(flag == 0 && line.compare("Input") == 1){
            // read the next line?
            std::getline(istrm, line);
            while(line.compare("Expected") != 1){
                // line = 2 7 3 5
                nums = t.constructVectorFromLine(line); 

                istrm >> target;
            }

            flag = 1;
        }

        std::getline(istrm, line);
        expected = t.constructVectorFromLine(line); 
    }

    std::vector<int> results;
    TwoSum ts;
    results = ts.twoSum(nums, target);
    
    if(expected == results){
        std::cout << "Pass!\n";
    }
    else{
        std::cout << "Fail!\n";
    }

    std::cout << "nums: ";
    Test::printVector(nums);
    std::cout << "expected: ";
    Test::printVector(expected);
};

int main(){
    TwoSum_Test tst;
    tst.twoSumTest();
};