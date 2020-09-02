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
	int maxSubArray(vector<int>& nums) {
		int* r = new int[nums.size()];
		r[0] = nums[0];
		int max = r[0];
		for (int i = 1;i < nums.size();i++)
		{
			if (r[i - 1] < 0)
			{
				r[i] = nums[i];
			}
			else
			{
				r[i] = nums[i] + r[i - 1];
			}
			max = r[i] > max ? r[i] : max;
		}
		return max;
	}
};

