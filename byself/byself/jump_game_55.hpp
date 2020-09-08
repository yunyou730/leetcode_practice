#pragma once
#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <deque>

using namespace std;
class Solution {
public:
	// Greedy
	bool canJump(vector<int>& nums)
	{
		int maxJump = nums.size() - 1;
		for (int pos = nums.size() - 2;pos >= 0;pos--)
		{
			if (pos + nums[pos] >= maxJump)
			{
				maxJump = pos;
			}
		}
		return maxJump == 0;
	}

	//// DP 2
	//bool canJump(vector<int>& nums)
	//{
	//	int len = nums.size();
	//	int* state = new int[len];
	//	for (int i = 0;i < nums.size() - 1;i++)
	//	{
	//		state[i] = 0;
	//	}
	//	state[len - 1] = 1;

	//	for (int pos = len - 2;pos >= 0;pos--)
	//	{
	//		int step = nums[pos];			
	//		for (int i = 0;i <= step;i++)
	//		{
	//			int tempPos = pos + i;
	//			if (tempPos >= len || state[tempPos] == 1)
	//			{
	//				state[pos] = 1;
	//				break;
	//			}
	//			else
	//			{
	//				state[pos] = -1;
	//			}
	//		}
	//	}
	//	return state[0] == 1;
	//}


	///*
	// DP 1
	//	DP :
	//	 0	未知 
	//	 1	可以走通
	//	-1	不可以走通
	//*/
	//bool canJump(vector<int>& nums)
	//{
	//	int len = nums.size();
	//	int* state = new int[len];
	//	for (int i = 0;i < nums.size() - 1;i++)
	//	{
	//		state[i] = 0;
	//	}
	//	state[len - 1] = 1;

	//	return dp(0,nums,state);
	//}

	//bool dp(int pos,const vector<int>& nums, int* state)
	//{
	//	if (state[pos] == 1)
	//	{
	//		return true;
	//	}
	//	if (state[pos] == -1)
	//	{
	//		return false;
	//	}

	//	int step = nums[pos];
	//	for (int i = 1;i <= step;i++)
	//	{
	//		int tempPos = pos + i;
	//		if (tempPos < nums.size())
	//		{
	//			if (dp(tempPos,nums,state))
	//			{
	//				state[tempPos] = 1;
	//				return true;
	//			}
	//		}
	//	}
	//	state[pos] = -1;
	//	return false;
	//}



	// DP by self
	//bool canJump(vector<int>& nums)
	//{
	//	if (nums.size() == 1) return true;
	//	int maxReach = 0;
	//	int pos = 0;
	//	for (int pos = 0; pos < nums.size(); pos++)
	//	{
	//		if (pos > maxReach)
	//		{
	//			return false;
	//		}

	//		int step = nums[pos];
	//		for (int i = 1;i <= step;i++)
	//		{
	//			int tempMax = pos + i;
	//			maxReach = maxReach < tempMax ? tempMax : maxReach;
	//			if (maxReach >= nums.size() - 1)
	//			{
	//				return true;
	//			}
	//		}
	//	}
	//	return false;
	//}

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