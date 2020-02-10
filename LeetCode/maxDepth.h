#pragma once
#include"config.h" 
#include<algorithm>
class  maxDepth {
public:
    /*
            104. 二叉树的最大深度
    说明：
         给定一个二叉树，找出其最大深度。
         二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。
    实例：
         [3,9,20,null,null,15,7] -> 3
    */

    /*
    解法：递归实现
    */
    int solution(TreeNode* root) 
    {
        if (!root)
        {
            return 0;
        }
        return std::max(solution(root->left), solution(root->right)) + 1;
    }
    

};