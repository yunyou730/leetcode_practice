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
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        set<int>    used;
        vector<int>     path;
        dfs(std::make_pair(1,n),used,res,path,k);
        return res;
    }
    
    void dfs(const std::pair<int,int>& fromto,set<int>& used,vector<vector<int>>& res,vector<int>& path,int destLen)
    {
        if(path.size() == destLen)
        {
            res.push_back(path);
            return;
        }
        
        int from = fromto.first;
        int to = fromto.second;
        if(path.size() > 0)
        {
            from = path[path.size() - 1] + 1;
        }
        for(int i = from;i <= to;i++)
        {
            if(used.find(i) != used.end())
            {
                continue;
            }
            
            path.push_back(i);
            used.insert(i);
            
            dfs(fromto,used,res,path,destLen);
            
            path.pop_back();
            used.erase(i);
            
        }
    }
};
