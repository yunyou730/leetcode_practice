#pragma once
#include <stdio.h>
#include <vector>
#include <set>
#include <map>

using namespace std;
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        dfs(candidates,result,target);
        return result;
    }
    
    void dfs(const vector<int>& candidates,vector<vector<int>>& result,int target)
    {
        for(int i = 0;i < candidates.size();i++)
        {
            int nextTarget = target - candidates[i];
            dfs(candidates,result,nextTarget);
        }
    }
};
