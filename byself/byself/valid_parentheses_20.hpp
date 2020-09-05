#pragma once
#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <deque>
#include <stack>

using namespace std;
class Solution {
public:
	bool isValid(string s) {
		stack<char> st;

		map<char, char> exitMap;
		exitMap.insert(make_pair(')', '('));
		exitMap.insert(make_pair('}', '{'));
		exitMap.insert(make_pair(']', '['));

		for (int i = 0; i < s.size(); i++)
		{
			char ch = s[i];
			map<char, char>::iterator it = exitMap.find(ch);
			if (it != exitMap.end())
			{
				if (st.size() == 0)
				{
					return false;
				}
				if (st.top() != it->second)
				{
					return false;
				}
				st.pop();
			}
			else
			{
				st.push(ch);
			}
		}
		return st.size() == 0;
	}
};

