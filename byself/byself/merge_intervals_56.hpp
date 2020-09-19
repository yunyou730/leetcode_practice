#pragma once
#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
	vector<vector<int>> merge(vector<vector<int>>& intervals) {
		vector<vector<int>> result;
		if (intervals.size() == 0)
		{
			return result;
		}

		// sort by start
		std::sort(intervals.begin(), intervals.end(), [&](const vector<int>& v1,const vector<int>& v2)
		{
			return v1[0] < v2[0];
		});

		result.push_back(intervals[0]);
		for (int i = 1;i < intervals.size();i++)
		{
			vector<int>& prev = result[result.size() - 1];
			vector<int>& cur = intervals[i];
			
			if (cur[0] >= prev[0] && cur[0] <= prev[1])
			{
				// merge
				prev[1] = prev[1] > cur[1] ? prev[1] : cur[1];
			}
			else if (cur[0] > prev[1])
			{
				// new
				result.push_back(cur);
			}
		}

		return result;
	}

	void dump(vector<vector<int>>& result)
	{
		printf("-----------------\n");
		for (int i = 0;i < result.size();i++)
		{
			printf("[%d,%d]\n",result[i][0], result[i][1]);
		}
		printf("#----------------\n");
	}
};

