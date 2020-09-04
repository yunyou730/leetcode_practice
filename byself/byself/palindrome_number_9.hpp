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
	bool isPalindrome(int x) {
		if (x < 0) return false;
		if (x == 0) return true;

		vector<int> arr;
		while (x > 0)
		{
			arr.push_back(x % 10);
			x /= 10;
		}
		int mid = arr.size() / 2;
		for (int i = 0;i < mid;i++)
		{
			if (arr[i] != arr[arr.size() - 1 - i])
			{
				return false;
			}
		}
		return true;
	}
};