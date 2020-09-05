#pragma once
#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <deque>

using namespace std;

/*
+45, jump game 用  DP 的思想做 , 超时了. 还得再想办法.正确思路 应该是 backtracking ?
@miao @todo
*/
class Solution {

public:
	int jump(vector<int>& nums)
	{
		int len = nums.size();
		int* arr = new int[len];
		for (int i = 1; i < len; i++)
		{
			arr[i] = INT_MAX;
		}
		arr[0] = 0;

		int curPos = 0;
		int maxPosFlag = 0;
		while (curPos < len)
		{
			if (arr[curPos] == INT_MAX)
			{
				curPos++;
				continue;
			}

			int maxStep = nums[curPos];
			for (int i = 1; i <= maxStep; i++)
			{
				int targetPos = curPos + i;
				if (targetPos < len && targetPos > maxPosFlag)
				{
					int stepValue = arr[curPos] + 1;
					if (stepValue < arr[targetPos])
					{
						arr[targetPos] = stepValue;

						if (targetPos == len - 1)
						{
							return stepValue;
						}
					}
				}
			}
			maxPosFlag = curPos + maxStep;
			curPos++;
		}
		return arr[len - 1];
	}
};
