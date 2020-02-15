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
        107. �������Ĳ�α��� II
˵����
     ����һ����������������ڵ�ֵ�Ե����ϵĲ�α����� ��������Ҷ�ӽڵ����ڲ㵽���ڵ����ڵĲ㣬���������ұ�����
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