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
	int lengthOfLongestSubstring(string s) 
	{
		int begin = 0;
		int end = 0;

		set<char> exist;
		deque<char> queue;
		int maxLen = 0;

		while (end < s.length())
		{
			char ch = s.at(end);
			if (exist.find(ch) == exist.end())
			{
				exist.insert(ch);
				queue.push_back(ch);
				end++;
			}
			else
			{
				int curLen = exist.size();
				maxLen = curLen > maxLen ? curLen : maxLen;

				char toRemoveChar = queue.at(0);
				queue.pop_front();
				exist.erase(toRemoveChar);
				begin++;
			}
		}

		int curLen = exist.size();
		maxLen = curLen > maxLen ? curLen : maxLen;

		return maxLen;
	}
};