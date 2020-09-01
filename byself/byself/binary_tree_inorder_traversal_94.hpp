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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        DoTrav(root, result);
        return result;
    }

    void DoTrav(TreeNode* node,vector<int>& result)
    {
        if (node == nullptr)
            return;
        if (node->left)
        {
            DoTrav(node->left, result);
        }
        result.push_back(node->val);
		if (node->right)
		{
			DoTrav(node->right, result);
		}
    }
};