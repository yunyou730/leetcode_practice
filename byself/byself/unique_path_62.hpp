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
	// m:cols , n: rows
	int uniquePaths(int m, int n) {
		int** result = new int*[n];

		for (int row = 0;row < n;row++)
		{
			result[row] = new int[m];

			for (int col = 0;col < m;col++)
			{
				if (row == 0 && col == 0)
				{
					result[row][col] = 1;
				}
				else
				{
					int fromLeft = (col - 1) <  0 ? 0: result[row][col - 1];
					int fromTop = (row - 1) < 0 ? 0 : result[row - 1][col];
					result[row][col] = fromLeft + fromTop;
				}
			}
		}
		return result[n - 1][m - 1];
	}
};

