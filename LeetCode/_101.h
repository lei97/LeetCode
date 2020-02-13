#pragma once
#include "config.h"

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
        101. ¶Ô³Æ¶þ²æÊ÷
*/
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr)
        {
            return true;
        }
        return isEqual(root->left, root->right);
    }

    bool isEqual(TreeNode* left, TreeNode* right)
    {
        if (left == nullptr || right == nullptr)
        {
            return left == right;
        }
        if (left->val != right->val)
        {
            return false;
        }
        return isEqual(left->left, right->right) && isEqual(left->right, right->left);
    }
};