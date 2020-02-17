#pragma once

#include "config.h"

/*
        112. Â·¾¶×ÜºÍ
*/

class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) 
    {
        if (root == nullptr)
        {
            return false;
        }
        if (root->left == nullptr && root->right == nullptr)
        {
            return root->val == sum;
        }
        return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
    }
};