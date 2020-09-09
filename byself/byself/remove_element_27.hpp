#pragma once
#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <deque>

using namespace std;

/*
	一次 后面往前搬运 ,就能搬运成功   
	需要体会 
*/
class Solution {
public:
	int removeElement(vector<int>& nums, int val)
	{
		int i = 0;
		for (int j = 0;j < nums.size();j++)
		{
			if (nums[j] != val)
			{
				nums[i] = nums[j];
				i++;
			}
		}
		return i;
	}
};
