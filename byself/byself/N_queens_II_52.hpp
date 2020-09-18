#pragma once
#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <string>

using namespace std;

class Solution {
public:
	int totalNQueens(int n) 
	{
		vector<vector<string>> result;
		vector<string> board(n, string(n, '.'));
		backstracking(result, board, n, 0);
		return result.size();
	}

	bool backstracking(vector<vector<string>>& result, vector<string>& board, int n, int row)
	{
		bool bOK = false;
		for (int col = 0; col < n; col++)
		{
			if (checkValid(board, n, row, col))
			{
				board[row][col] = 'Q';

				if (row + 1 < n)
				{
					bOK = backstracking(result, board, n, row + 1);
				}
				else
				{
					result.push_back(board);
					resetRow(board, n, row);
				}
			}
		}
		if (!bOK)
		{
			if (row > 0)
			{
				resetRow(board, n, row - 1);
			}
		}
		return bOK;
	}

	void resetRow(vector<string>& board, int n, int row)
	{
		board.erase(board.begin() + row);
		string str(n, '.');
		board.insert(board.begin() + row, str);
	}

	bool checkValid(vector<string>& board, int n, int row, int col)
	{
		for (int checkRow = 0; checkRow < row; checkRow++)
		{
			// 正上方 
			if (board[checkRow][col] == 'Q')
			{
				return false;
			}

			int delta = col - row;
			int sum = row + col;

			// 左上角
			int checkCol = checkRow + delta;
			if (checkCol >= 0 && checkCol < n && board[checkRow][checkCol] == 'Q')
			{
				return false;
			}

			// 右上角  
			checkCol = sum - checkRow;
			if (checkCol >= 0 && checkCol < n && board[checkRow][checkCol] == 'Q')
			{
				return false;
			}
		}
		return true;
	}
};
