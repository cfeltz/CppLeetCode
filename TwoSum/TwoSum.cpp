#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <stdio.h>
#include "twosum.h"

std::vector<int> TwoSum::twoSum(std::vector<int>&nums, int target) {
    // create an unordered_set of ints
    std::unordered_set<int> neededForTarget;
    std::unordered_map<int, int> indices;

    //iterate over the vector of nums
    for(int i = 0; i < nums.size(); i++){
        indices.insert({nums[i], i});
        
        if(neededForTarget.find(target - nums[i]) != neededForTarget.end()){
            return std::vector<int> {i, indices.find(target - nums[i])->second};
        }
        neededForTarget.insert(nums[i]);
    }
    
    return std::vector<int>{};    
}

// iterating over the list
// { 1, 8, 3, 5, 7 }
// as you're iterating over the list you know that the previous 
// parts of the list cannot contain what you're looking for 
// since if it did, you wouldn't still be in the loop