#pragma once

#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <deque>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n){
        vector<string> ans;
        string str;
        dfs(0,0,n,ans,str);
        return ans;
    }
    
    
    void dfs(int left,int right,int n,vector<string>& ans,string& str)
    {
        if(left == n && right == n)
        {
            ans.push_back(str);
            return;
        }
        
        if(left < right)
        {
            return;
        }
        
        if(left < n)
        {
            str += "(";
            dfs(left + 1,right,n,ans,str);
            str.erase(str.begin() + (str.size() - 1));
        }
        
        if(right < n)
        {
            str += ")";
            dfs(left,right + 1,n,ans,str);
            str.erase(str.begin() + (str.size() - 1));
        }
    }
};
