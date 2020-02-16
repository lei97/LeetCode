#pragma once
#include "config.h"


/*
        226. ·­×ª¶þ²æÊ÷
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
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr)
        {
            return root;
        }
        change(root);
        return root;
    }

    void change(TreeNode* root)
    {
        if (root == nullptr)
        {
            return;
        }

        TreeNode* tmp = root->left;
        root->left = root->right;
        root->right = tmp;
        
        if (root->left != nullptr)
        {
            change(root->left);
        }
        if (root->right != nullptr)
        {
            change(root->right);
        }
    }
};