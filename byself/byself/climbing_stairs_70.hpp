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
	int climbStairs(int n) {

		if (n == 1)
		{
			return 1;
		}
		if (n == 2)
		{
			return 2;
		}

		int* result = new int[n];
		result[0] = 1;
		result[1] = 2;
		for (int stair = 2;stair < n;stair++)
		{
			int v1 = result[stair - 1];
			int v2 = result[stair - 2];
			result[stair] = v1 + v2;
		}
		return result[n - 1];
	}
};

