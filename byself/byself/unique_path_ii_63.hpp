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
	int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

		int rows = obstacleGrid.size();
		int cols = obstacleGrid[0].size();

		int** result = new int* [rows];
		for (int row = 0;row < rows; row++)
		{
			result[row] = new int[cols];
			for (int col = 0; col < cols; col++)
			{
				int obsThis = obstacleGrid[row][col];
				if (obsThis > 0)
				{
					result[row][col] = 0;
				}
				else
				{
					if (row == 0 && col == 0)
					{
						if (obsThis > 0)
							return 0;
						else
							result[0][0] = 1;
					}
					else
					{
						int fromTop = 0;
						if (row > 0)
						{
							fromTop = result[row - 1][col];
						}

						int fromLeft = 0;
						if (col > 0)
						{
							fromLeft = result[row][col - 1];
						}
						result[row][col] = fromTop + fromLeft;
					}
				}	
			}
		}
		return result[rows - 1][cols - 1];
	}
};

