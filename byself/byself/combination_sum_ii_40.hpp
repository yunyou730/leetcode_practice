/*
40. Combination Sum II
Medium

2149

75

Add to List

Share
Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.



Example 1:

Input: candidates = [10,1,2,7,6,1,5], target = 8
Output:
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]
Example 2:

Input: candidates = [2,5,2,1,2], target = 5
Output:
[
[1,2,2],
[5]
]


Constraints:

1 <= candidates.length <= 100
1 <= candidates[i] <= 50
1 <= target <= 30
*/


// ¼ôÖ¦´ýÓÅ»¯ ....
#pragma once
#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;
class Solution {
public:
	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
		vector<vector<int>> result;
		if (candidates.size() == 0)
		{
			return result;
		}
		sort(candidates.begin(), candidates.end());

		vector<int> cur;
		dfs(candidates, result, target, cur, -1, 0);
		return result;
	}

	void dfs(const vector<int>& candidates, vector<vector<int>>& result, int target, vector<int>& cur, int usedIndex, int depth)
	{
		if (target < 0)
		{
			return;
		}

		if (target == 0)
		{
			for (int i = 0; i < result.size(); i++)
			{
				if (result[i] == cur)
				{
					return;
				}
			}
			result.push_back(cur);
			return;
		}

		for (int i = usedIndex + 1; i < candidates.size(); i++)
		{
			int nextTarget = target - candidates[i];
			cur.push_back(candidates[i]);
			dfs(candidates, result, nextTarget, cur, i, depth + 1);
			cur.pop_back();
		}
	}
};