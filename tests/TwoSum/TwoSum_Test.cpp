#include "../../TwoSum/TwoSum.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

// so the goal here is to read the line
// then parse the ints from the line
// if its the second line we know that it's just one int


bool twoSumTest(){
    std::ifstream istrm("testinput.txt"); 
    std::vector<int> nums;
    int lineNumber = 0;
    int target;
    
    while(!istrm.eof()){
        if(lineNumber == 0){
            // this will parse the input of the string
            std::string line;
            std::getline(istrm, line);

            const char delimiter = ' ';
            std::stringstream ss(line); 

            std::string s; 
            while(std::getline(ss, s, ' ')){
                int temp = std::stoi(s);
                nums.push_back(temp);
            }
        }
        else{
            istrm >> target; 
        }

        lineNumber++;
    }

    for(int i = 0; i < nums.size(); i++){
        std::cout << nums.at(i) << " ";
    }
    std::cout << "\n" << target << "\n";
    TwoSum ts;
    std::vector<int> result = ts.twoSum(nums, target);

    for(int i = 0; i < result.size(); i++){
        std::cout << result.at(i) << " ";
    }

    std::cout << "\n";    

    return true;
}

int main(){
    twoSumTest();
}