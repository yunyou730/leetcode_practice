#pragma once
#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <deque>

using namespace std;
/*
@miao @todo
result is error!!
*/
class Solution {
public:
	string longestPalindrome(string s) {
		int begin = 0;
		int end = 0;

		for (int i = 0;i < s.length();i++)
		{
			int len1 = expandAroundCenter(s, i, i);
			int len2 = expandAroundCenter(s, i, i + 1);

			printf("[len of %d - %d] is %d\n", i, i, len1);
			printf("[len of %d - %d] is %d\n", i, i + 1, len2);

			int len = len1 > len2 ? len1 : len2;
			if (len > end - begin)
			{
				bool is1 = len1 > len2;
				if (is1)
				{
					begin = i - (len - 1);
					end = i + (len - 1);
				}
				else
				{
					begin = i - (len - 1);
					end = i + 1 + (len - 1);
				}
			}
		}

		return (end - begin + 1 % 2 != 0) ? s.substr(begin, end) : s.substr(begin, end + 1);
	}
	

	int expandAroundCenter(const string& s,int begin,int end)
	{
		int oBegin = begin;
		int oEnd = end;

		int strLen = s.length();
		int len = 0;
		while (true)
		{
			if (begin < 0 || end >= strLen)
			{
				break;
			}
			if (s[begin] == s[end])
			{
				len++;
				begin--;
				end++;
			}
			else
			{
				break;
			}
		}
		return len;
	}

};