#pragma once

#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <string>

using namespace std;

class Solution {
public:
	string addBinary(string a, string b) {
		string ret;

		int aLen = a.size();
		int bLen = b.size();
		int len = aLen > bLen ? aLen : bLen;

		bool bCarry = false;
		for (int i = 0;i < len;i++)
		{
			int countOfOne = 0;
			if (bCarry)
			{
				countOfOne++;
			}
			if (i < aLen && a[aLen - 1 - i] == '1')
			{
				countOfOne++;
			}
			if (i < bLen && b[bLen - 1 - i] == '1')
			{
				countOfOne++;
			}
			char bit = (countOfOne == 1 || countOfOne == 3) ? '1' : '0';
			bCarry = (countOfOne >= 2);
			ret.insert(ret.begin(), bit);
		}
		if (bCarry)
		{
			ret.insert(ret.begin(), '1');
		}
		return ret;
	}
};