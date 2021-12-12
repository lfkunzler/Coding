#include "../../inc/solution/solution.hpp"
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> Solution::twoSumBruteForce(vector<int>& nums, int target)
{
    vector<int> res;

    int size = nums.size();

    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (target == nums[i]+nums[j]) {
                res.push_back(i);
                res.push_back(j);
                return res;
            }
        }
    }
    res.push_back(0);
    res.push_back(0);

    return res;
}

vector<int> Solution::twoSum(vector<int>& nums, int target)
{
    unordered_map<int, int> nums_map;
    int size = nums.size();

    for (int i = 0; i < size; i++) {
        int cmpl = target - nums[i];
        if (nums_map.find(cmpl) != nums_map.end()) {
            return {nums_map[cmpl], i};
        }
        
        nums_map[nums[i]] = i;
    }
    return {0, 0};
}
