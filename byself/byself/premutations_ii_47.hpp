#pragma once

#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> perm;
        vector<bool> vis(nums.size(),false);
        sort(nums.begin(),nums.end());
        backstrack(nums,ans,vis,perm);
        return ans;
    }
    
    void backstrack(const vector<int>& nums,vector<vector<int>>& ans,vector<bool>& vis,vector<int>& perm)
    {
        if(perm.size() == nums.size())
        {
            ans.push_back(perm);
            return;
        }
        
        for(int i = 0;i < nums.size();i++)
        {
            if(vis[i])
            {
                continue;
            }
            // 重点就是剪枝：如果这个数和之前的数一样，并且之前的数还未使用过（说明已经回溯过）
            if(i > 0 && nums[i] == nums[i - 1] && !vis[i - 1])
            {
                continue;
            }
            
            perm.push_back(nums[i]);
            vis[i] = true;
            backstrack(nums,ans,vis,perm);
            perm.pop_back();
            vis[i] = false;
        }
    }
    
};
