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
        //vector<vector<pair<int, int>>> routes;

		int rowCnt = board.size();
		int colCnt = board[0].size();
        
        for (int row = 1;row < rowCnt - 1;row++)
        {
            for (int col = 0;col < colCnt - 1;col++)
            {
                bool bAdjBorder = false;
                vector<pair<int, int>> route;
                getRoute(board,row,col,route,closeSet, bAdjBorder);

                if (route.size() > 0 && !bAdjBorder)
                {
                    for (vector<pair<int, int>>::iterator it = route.begin();
                        it != route.end();
                        it++)
                    {
                        board[it->first][it->second] = 'X';
                    }
                }
            }
        }
    }
    
    void getRoute(const vector<vector<char>>& board,
                    int row,int col,
                    vector<pair<int, int>>& route,
                    set<pair<int, int>>& closeSet,
                    bool& bAdjBorder)
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
            route.push_back(coord);
            closeSet.insert(coord);

            if (!bAdjBorder && (row == 0 || col  == 0 || row == rowCnt - 1 || col == colCnt - 1))
            {
                bAdjBorder = true;
            }

            getRoute(board, row - 1, col, route, closeSet, bAdjBorder);
            getRoute(board, row + 1, col, route, closeSet, bAdjBorder);
            getRoute(board, row, col + 1, route, closeSet, bAdjBorder);
            getRoute(board, row, col - 1, route, closeSet, bAdjBorder);

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
