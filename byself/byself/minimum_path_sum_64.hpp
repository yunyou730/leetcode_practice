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
	int minPathSum(vector<vector<int>>& grid) 
	{
		int rowCnt = grid.size();
		int colCnt = grid[0].size();

		vector<vector<int>> result;

		for (int row = 0;row < rowCnt;row++)
		{
			vector<int> costRow;
			result.push_back(costRow);

			for (int col = 0;col < colCnt;col++)
			{
				if (row == 0 && col == 0)
				{
					result[row].push_back(grid[row][col]);
				}
				else
				{
					int costFromLeft = (col - 1) < 0 ? INT_MAX : result[row][col - 1];
					int costFromUp = (row - 1) < 0 ? INT_MAX : result[row - 1][col];
					int costInherit = costFromUp < costFromLeft ? costFromUp : costFromLeft;

					int costGrid = grid[row][col];
					result[row].push_back(costInherit + costGrid);
				}
			}
		}
		return result[rowCnt - 1][colCnt - 1];
	}
};

