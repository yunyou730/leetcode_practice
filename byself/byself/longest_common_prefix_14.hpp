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
	string longestCommonPrefix(vector<string>& strs) {
		string prefix;
		for (int index = 0;;index++)
		{
			char* ch = NULL;
			for (vector<string>::iterator it = strs.begin(); it != strs.end(); it++)
			{
				string& curStr = *it;
				if (curStr.size() > index)
				{
					if (ch == NULL)
					{
						ch = &curStr[index];
					}
					else if(*ch != curStr[index])
					{
						ch = NULL;
						break;
					}
				}
				else
				{
					ch = NULL;
					break;
				}
			}
			if (ch != NULL)
			{
				prefix += *ch;
			}
			else
			{
				break;
			}
		}
		return prefix;
	}
};

