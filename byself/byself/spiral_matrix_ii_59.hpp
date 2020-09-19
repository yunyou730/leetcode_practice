#pragma once
#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <string>

using namespace std;

/*
Given a positive integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.

Example:

Input: 3
Output:
[
 [ 1, 2, 3 ],
 [ 8, 9, 4 ],
 [ 7, 6, 5 ]
]
*/
class Solution {
public:
	vector<vector<int>> generateMatrix(int n) {
		vector<vector<int>> result(n, vector<int>(n));
		
		int r1 = 0, c1 = 0;
		int r2 = n - 1, c2 = n - 1;
		int num = 0;
		int maxNum = n * n;
		while (true)
		{
			for (int col = c1;col <= c2;col++)
			{
				result[r1][col] = ++num;
			}
			if (num == maxNum)
			{
				break;
			}


			for (int row = r1 + 1;row <= r2;row++)
			{
				result[row][c2] = ++num;
			}
			if (num == maxNum)
			{
				break;
			}

			for (int col = c2 - 1;col >= c1;col--)
			{
				result[r2][col] = ++num;
			}
			if (num == maxNum)
			{
				break;
			}

			for (int row = r2 - 1;row > r1;row--)
			{
				result[row][c1] = ++num;
			}
			if (num == maxNum)
			{
				break;
			}

			r1++;
			c1++;
			r2--;
			c2--;
		}

		return result;
	}



	void dump(const vector<vector<int>>& matrix)
	{
		printf("----------------------\n");
		for (int r = 0;r < matrix.size();r++)
		{
			for (int c = 0;c < matrix[r].size();c++)
			{
				printf("%2d",matrix[r][c]);
				if (c != matrix[r].size() - 1)
				{
					printf(",");
				}
			}
			printf("\n");
		}
		printf("-------------------------------\n");
	}

};
