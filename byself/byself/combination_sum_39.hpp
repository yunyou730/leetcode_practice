/*
39. Combination Sum
Medium

Share
Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

It is guaranteed that the number of unique combinations that sum up to target is less than 150 combinations for the given input.



Example 1:

Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.
Example 2:

Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]
Example 3:

Input: candidates = [2], target = 1
Output: []
Example 4:

Input: candidates = [1], target = 1
Output: [[1]]
Example 5:

Input: candidates = [1], target = 2
Output: [[1,1]]


Constraints:

1 <= candidates.length <= 30
1 <= candidates[i] <= 200
All elements of candidates are distinct.
1 <= target <= 500
*/

#pragma once
#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        if (candidates.size() == 0)
        {
            return result;
        }
        sort(candidates.begin(), candidates.end());

        vector<int> cur;
        dfs(candidates,result,target,cur,0);
        return result;
    }
    
    void dfs(const vector<int>& candidates,vector<vector<int>>& result,int target,vector<int>& cur,int usedIndex)
    {
        if (target < 0)
        {
            return;
        }
        if (target == 0)
        {
            result.push_back(cur);
            return;
        }

        for (int i = usedIndex;i < candidates.size();i++)
        {
            int nextTarget = target - candidates[i];
            cur.push_back(candidates[i]);
            usedIndex = i;
            dfs(candidates, result, nextTarget, cur, i);
            cur.pop_back();
        }
    }
};
