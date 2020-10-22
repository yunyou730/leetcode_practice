#pragma once

#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <deque>
#include <stack>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int len = nums.size();
        if(len == 0)
        {
            return 0;
        }
        if(len == 1)
        {
            return nums[0];
        }
        if(len == 2)
        {
            return nums[1] > nums[0] ? nums[1] : nums[0];
        }
        
        vector<int> maxArray(nums.size(),0);
        maxArray[0] = nums[0];
        maxArray[1] = nums[1] > nums[0] ? nums[1] : nums[0];
        
        for(int i = 2;i < len;i++)
        {
            int v1 = nums[i] + maxArray[i - 2];
            int v2 = maxArray[i - 1];
            maxArray[i] = v1 > v2 ? v1 : v2;
        }
        
        return maxArray[len - 1];
    }
};

