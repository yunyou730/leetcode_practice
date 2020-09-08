#pragma once
#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <deque>

using namespace std;
class Solution {
public:

	bool canJump(vector<int>& nums)
	{
		if (nums.size() == 1) return true;
		int maxReach = 0;
		int pos = 0;
		for (int pos = 0; pos < nums.size(); pos++)
		{
			if (pos > maxReach)
			{
				return false;
			}

			int step = nums[pos];
			for (int i = 1;i <= step;i++)
			{
				int tempMax = pos + i;
				maxReach = maxReach < tempMax ? tempMax : maxReach;
				if (maxReach >= nums.size() - 1)
				{
					return true;
				}
			}
		}
		return false;
	}

	/*
	bool canJump(vector<int>& nums) 
	{
		return dfs(0,nums);
	}

	bool dfs(int pos,const vector<int>& nums)
	{
		if (pos >= nums.size() - 1)
		{
			return true;
		}
		int step = nums[pos];
		for (int i = step; i >= 1; i--)
		{
			bool isReach = dfs(pos + i,nums);
			if (isReach)
			{
				return true;
			}
		}
		return false;
	}
	*/
};