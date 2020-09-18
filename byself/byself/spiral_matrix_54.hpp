#pragma once
#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <string>

using namespace std;

/*
Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.

Example 1:

Input:
[
 [ 1, 2, 3 ],
 [ 4, 5, 6 ],
 [ 7, 8, 9 ]
]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:

Input:
[
  [1, 2, 3, 4],
  [5, 6, 7, 8],
  [9,10,11,12]
]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
*/
class Solution {
public:

	typedef enum
	{
		Right,
		Down,
		Left,
		Up,

		Max,
	}EDir;

	vector<int> spiralOrder(vector<vector<int>>& matrix) 
	{
		vector<int> result;
		if (matrix.size() == 0)
		{
			return result;
		}

		int curRow = 0;
		int curCol = 0;
		EDir curDir = Right;

		int rowCnt = matrix.size();
		int colCnt = matrix[0].size();
		int totalCnt = rowCnt * colCnt;

		int rBound = colCnt - 1;
		int dBound = rowCnt - 1;
		int uBound = 0;
		int lBound = 0;

		int nextRow, nextCol;
		while (result.size()  < totalCnt)
		{
			result.push_back(matrix[curRow][curCol]);
			bool switchDir = false;
			switch (curDir)
			{
			case Right:
				nextRow = curRow;
				nextCol = curCol + 1;
				if (nextCol > rBound)
				{
					nextRow = curRow + 1;
					nextCol = curCol;
					uBound++;
					switchDir = true;
				}
				break;
			case Down:
				nextCol = curCol;
				nextRow = nextRow + 1;
				if (nextRow > dBound)
				{
					nextCol = curCol - 1;
					nextRow = curRow;
					rBound--;
					switchDir = true;
				}
				break;
			case Left:
				nextRow = curRow;
				nextCol = curCol - 1;
				if (nextCol < lBound)
				{
					nextRow = curRow - 1;
					nextCol = curCol;
					dBound--;
					switchDir = true;
				}
				break;
			case Up:
				nextCol = curCol;
				nextRow = curRow - 1;
				if (nextRow < uBound)
				{
					nextCol = curCol + 1;
					nextRow = curRow;
					lBound++;
					switchDir = true;
				}
				break;
			}

			curRow = nextRow;
			curCol = nextCol;
			if (switchDir)
			{
				curDir = (EDir)(curDir + 1);
				if (curDir == Max)
				{
					curDir = Right;
				}
			}
		}
		return result;
	}
};
