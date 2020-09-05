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
		char arr['}'  +  1] = { 0 };
		arr[')'] = '(';
		arr['}'] = '{';
		arr[']'] = '[';

		for (int i = 0; i < s.size(); i++)
		{
			char ch = s[i];
			if(arr[ch] != 0)
			{
				if (st.size() == 0)
				{
					return false;
				}
				if (st.top() != arr[ch])
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

