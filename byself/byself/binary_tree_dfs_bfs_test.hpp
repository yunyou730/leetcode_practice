#pragma once

#include <stdio.h>
#include <vector>
#include <set>
#include <map>
#include <deque>
#include <stack>
#include <queue>

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
	void dfsNotRecr(TreeNode* root) 
    {
        if (root == nullptr)
        {
            return;
        }

        stack<TreeNode*> st;
        st.push(root);

        while (st.size() > 0)
        {
            TreeNode* node = st.top();
            st.pop();
            printf("%d\n",node->val);

            if (node->right) st.push(node->right);
            if (node->left) st.push(node->left);
        }
    }


    void dfsRecr(TreeNode* root)
    {
        if (root == nullptr)
        {
            return;
        }
        printf("%d\n",root->val);
        dfsRecr(root->left);
        dfsRecr(root->right);
    }

    void bfs(TreeNode* root)
    {
        if (root == nullptr)
        {
            return;
        }
        queue<TreeNode*> que;
        que.push(root);

        while (que.size() > 0)
        {
            TreeNode* node = que.front();
            printf("%d\n",node->val);
            que.pop();
            if (node->left)  que.push(node->left);
            if (node->right)  que.push(node->right);
        }
    }
};