#pragma once
#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <string>

using namespace std;

class Solution {
public:
	vector<vector<string>> solveNQueens(int n)
	{
		vector<vector<string>> result;
		vector<string>	board;
		init(board, n);
		backstracking(result,board,n,0);
		return result;
	}

	bool backstracking(vector<vector<string>>& result, vector<string>&	board,int n,int row)
	{
		bool bOK = false;
		for (int col = 0;col < n;col++)
		{
			//printf("row,col %d,%d\n",row,col);
			if (checkValid(board, n,row,col))
			{
				placeQueen(board, row, col);

				if (row + 1 < n)
				{
					bOK = backstracking(result, board, n, row + 1);
				}
				else
				{
					//dump(board, n);
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

	void init(vector<string>&	board,int n)
	{
		for (int row = 0; row < n; row++)
		{
			string s = "";
			for (int col = 0; col < n; col++)
			{
				s += ".";
			}
			board.push_back(s);
		}
	}

	void resetRow(vector<string>& board, int n,int row)
	{
		board.erase(board.begin() + row);
		string str = "";
		for (int i = 0;i < n;i++)
		{
			str += '.';
		}
		//board.insert( str,row);
		board.insert(board.begin() + row, str);
	}

	void reset(vector<string>& board, int n)
	{
		board.clear();
		init(board, n);
	}
	
	bool checkValid(vector<string>& board,int n,int row,int col)
	{
		for (int checkRow = 0;checkRow < row;checkRow++)
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

	void placeQueens(vector<string>& board,const vector<pair<int,int>>& coords)
	{
		for (int i = 0;i < coords.size();i++)
		{
			pair<int, int> coord = coords[i];
			int row = coord.first;
			int col = coord.second;
			board[row][col] = 'Q';
		}
	}

	void placeQueen(vector<string>& board, int row,int col)
	{
		board[row][col] = 'Q';
	}

	bool tryAndPlaceQueen(vector<string>& board, int n,int row, int col)
	{
		if (checkValid(board,n,row,col))
		{
			placeQueen(board, row, col);
			return true;
		}
		return false;
	}

	void dump(const vector<string>& board,int n)
	{
		printf("---------------------\n");
		for(int row = 0;row < n;row++)
		{
			for (int col = 0;col < n;col++)
			{
				printf("%c",board[row][col]);
			}
			printf("\n");
		}
	}
};
