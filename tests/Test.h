#pragma once
#include <vector>
#include <string>

class Test { 
    public:
        std::vector<int> constructVectorFromLine(std::string line);
        static void printVector(std::vector<int> nums);
};