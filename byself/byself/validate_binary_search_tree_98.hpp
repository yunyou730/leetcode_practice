#pragma once
#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <deque>

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
    bool isValidBST(TreeNode* root) 
    {
        vector<int> arr;
        return inorderTraversal(root,arr);
    }

    bool inorderTraversal(TreeNode* node, vector<int>& arr)
    {
        if (node == nullptr)
            return true;

        if (!inorderTraversal(node->left, arr))
        {
            return false;
        }
        //printf("%d,",node->val);
        if (arr.size() > 0 && node->val <= arr[arr.size() - 1])
        {
            return false;
        }
        arr.push_back(node->val);
        if (!inorderTraversal(node->right, arr))
        {
            return false;
        }

        return true;
    }
};
