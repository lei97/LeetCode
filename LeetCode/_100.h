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
        100. 相同的树
*/
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        if (p == nullptr && q == nullptr)
        {
            return true;
        }
        else if (p == nullptr || q == nullptr)
        {
            return false;
        }
        
        // 先序遍历
        std::stack<TreeNode*> pStack;
        pStack.push(p);
        std::stack<TreeNode*> qStack;
        qStack.push(q);
        while (!pStack.empty() && !qStack.empty())
        {
            TreeNode* a = pStack.top();
            TreeNode* b = qStack.top();

            pStack.pop();
            qStack.pop();

            if (a->right && b->right)
            {
                pStack.push(a->right);
                qStack.push(b->right);
            }
            else if (!a->right && !b->right)
            {
                ;
            }
            else
            {
                return false;
            }

            if (a->left && b->left)
            {
                pStack.push(a->left);
                qStack.push(b->left);
            }
            else if (!a->left && !b->left)
            {
                ;
            }
            else
            {
                return false;
            }

            if (a->val != b->val)
            {
                return false;
            }
        }
        if (!pStack.empty() || !qStack.empty())
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};