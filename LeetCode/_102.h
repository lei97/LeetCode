#pragma once
#include "config.h"
#include <queue>
/*
        102.二叉树的层次遍历
    说明:
        给定一个二叉树，返回其按层次遍历的节点值。 （即逐层地，从左到右访问所有节点）。
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        vector<vector<int>> data;
        if (root == nullptr)
        {
            return data;
        }
        std::queue<TreeNode*> q;
        q.push(root);
        while (!q.empty())
        {
            vector<int> a{};
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                TreeNode* x = q.front();
                a.push_back(x->val);
                q.pop();
                if (x->left != nullptr)
                {
                    q.push(x->left);
                }
                if (x->right != nullptr)
                {
                    q.push(x->right);
                }
            }
            data.push_back(a);
        }
        return data;
    }
};