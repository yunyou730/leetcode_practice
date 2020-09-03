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
	int minDepth(TreeNode* root) {
        if (root == nullptr) return 0;

        queue<TreeNode*> que;
        que.push(root);
        int depth = 0;
        while (que.size() > 0)
        {
            depth++;
            bool leafFound = false;
            int levelNodeCnt = que.size();
            for (int i = 0;i < levelNodeCnt;i++)
            {
                TreeNode* node = que.front();
                que.pop();

                if (node->left != nullptr)
                    que.push(node->left);
                if (node->right != nullptr) 
                    que.push(node->right);
                
                if (node->left == nullptr && node->right == nullptr)
                {
                    leafFound = true;
                    break;
                }
            }
            if (leafFound)
            {
                break;
            }
        }
        return depth;
	}
};