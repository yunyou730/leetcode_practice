#pragma once
#include <cstdio>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> res;
        res = {3,5,6,7};
        return res;
    }
    
    
    void test()
    {
        vector<int> nums = {3,5};
        vector<int> res = twoSum(nums,8);
        for(auto it = res.begin();it != res.end();it++)
        {
            printf("%d\n",*it);
        }
    }
};
