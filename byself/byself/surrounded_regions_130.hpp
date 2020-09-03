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
    void solve(vector<vector<char>>& board) 
    {
        if (board.size() == 0)
        {
            return;
        }

        set<pair<int, int>> closeSet;

		int rowCnt = board.size();
		int colCnt = board[0].size();

        for (int row = 0;row < rowCnt; row ++)
        {
            for (int col = 0;col < colCnt;col ++)
            {
                if (row == 0 || row == rowCnt - 1  || col == 0 || col == colCnt - 1)
                {
                    dfs(board, row, col, closeSet);
                }
            }
        }

		for (int row = 0; row < rowCnt; row++)
		{
			for (int col = 0; col < colCnt; col++)
			{
                if (board[row][col] == 'O')
                {
                    board[row][col] = 'X';
                }
                else if (board[row][col] == 'Y')
                {
                    board[row][col] = 'O';
                }
			}
		}
    }
    
    void dfs(vector<vector<char>>& board,
                    int row,int col,
                    set<pair<int, int>>& closeSet)
    {
        int rowCnt = board.size();
        int colCnt = board[0].size();

        
        if (row < 0 || col < 0 || row >=  rowCnt || col >= colCnt)
        {
            return;
        }

        if (closeSet.find(make_pair(row,col)) != closeSet.end())
        {
            return;
        }

        if (board[row][col] == 'O')
        {
            pair<int,int> coord = make_pair(row, col);
            closeSet.insert(coord);
            board[row][col] = 'Y';
            
            dfs(board, row - 1, col, closeSet);
            dfs(board, row + 1, col, closeSet);
            dfs(board, row, col + 1, closeSet);
            dfs(board, row, col - 1, closeSet);
        }
    }



    void dump(const vector<vector<char>>& board)
    {
        printf("----------\n");
        for (int row = 0;row < board.size();row++)
        {
            for (int col = 0;col < board[row].size();col++)
            {
                printf("%c",board[row][col]);
            }
            printf("\n");
        }
    }

    void addRow(vector<vector<char>>& board,const char* charsArray,int len)
    {
        vector<char> row;
        for (int i = 0;i < len;i++)
        {
            row.push_back(charsArray[i]);
        }
        board.push_back(row);
    }
};
