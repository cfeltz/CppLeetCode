#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "Test.h"
#include "TwoSum_Test.h"

std::vector<int> Test::constructVectorFromLine(std::string line){
    std::vector<int> nums;
    // line = 2 7 3 5
    std::stringstream ss(line);

    std::string s; 
    while(std::getline(ss, s, ' ')){
        int num = std::stoi(s);
        nums.push_back(num);
    }

    return nums;
};

static void Test::printVector(std::vector<int> v){
    for(int num : v){
        std::cout << num << " ";
    }
    std::cout << "\n"
};

int main(){
    TwoSum_Test tst;
    tst.twoSumTest();
};