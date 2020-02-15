#pragma once
#include "config.h"
#include <queue>
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
        107. 二叉树的层次遍历 II
说明：
     给定一个二叉树，返回其节点值自底向上的层次遍历。 （即按从叶子节点所在层到根节点所在的层，逐层从左向右遍历）
*/
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
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
            data.insert(data.begin(), a);
        }
        return data;
    }
};