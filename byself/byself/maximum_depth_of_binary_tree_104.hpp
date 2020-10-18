#pragma once

#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <deque>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int depth = (root != nullptr) ? 1 : 0;
        int maxDepth = depth;
        if(root != nullptr)
            dfs(root, depth,maxDepth);
        return maxDepth;
    }

    void dfs(TreeNode* node,int& depth,int& maxDepth)
    {
        if (depth > maxDepth)
            maxDepth = depth;
		if (node->left != nullptr)
		{
            depth++;
            dfs(node->left, depth,maxDepth);
            depth--;
		}
		if (node->right != nullptr)
		{
            depth++;
            dfs(node->right, depth, maxDepth);
            depth--;
		}
    }

public:
    TreeNode* makeTestcase()
    {
        TreeNode* node = new TreeNode(3);
        node->left = new TreeNode(9);
        node->right = new TreeNode(20);
        node->right->left = new TreeNode(15);
        node->right->right = new TreeNode(7);
        return node;
    }

};