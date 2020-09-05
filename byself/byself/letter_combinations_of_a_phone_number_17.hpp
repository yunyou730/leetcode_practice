#pragma once
#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <deque>

using namespace std;
class Solution {
public:
	vector<string> letterCombinations(string digits) {
		vector<string> result;
		deque<string> que;

		int asciiOfTwo = 50;
		int asciiOfA = 97;

		int posFlag = -1;
		for (int idx = 0; idx < digits.size(); idx++)
		{
			char ch = digits[idx];
			int delta = ch - asciiOfTwo;
			char from = delta * 3 + asciiOfA;
			if (ch > '7')
			{
				from += 1;
			}
			char to;
			if (ch == '9' || ch == '7')
			{
				to = from + 3;
			}
			else
			{
				to = from + 2;
			}

			//printf("[char %c] from %c to %c", ch, from, to);
			int prevSize = que.size();
			//printf("[prevSize]%d\n", prevSize);
			if (prevSize == 0)
			{
				for (char ch = from; ch <= to; ch++)
				{
					string str;
					str += ch;
					que.push_back(str);
				}
			}
			else
			{
				for (int i = 0; i < prevSize; i++)
				{
					string str = que.front();
					for (char ch = from; ch <= to; ch++)
					{
						que.push_back(str + ch);
					}
					que.pop_front();
				}
			}
		}

		for (int i = 0;i < que.size();i++)
		{
			result.push_back(que[i]);
		}

		return result;
	}
};

