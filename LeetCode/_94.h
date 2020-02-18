#pragma once
#include "config.h"
#include <stack>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/*
        94. 二叉树的中序遍历
*/
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> data;
        if (root == nullptr)
        {
            return data;
        }
        std::stack<TreeNode* > s;
        TreeNode* x = root;
        while (true)
        {
            if (x != nullptr)
            {
                s.push(x);
                x = x->left;
            }
            else if (!s.empty())
            {
                x = s.top();
                s.pop();
                data.push_back(x->val);
                x = x->right;
            }
            else
            {
                break;
            }
        }
        return data;
    }
};