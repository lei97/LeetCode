#pragma once
#include"config.h" 
#include<algorithm>
class  maxDepth {
public:
    /*
            104. ��������������
    ˵����
         ����һ�����������ҳ��������ȡ�
         �����������Ϊ���ڵ㵽��ԶҶ�ӽڵ���·���ϵĽڵ�����
    ʵ����
         [3,9,20,null,null,15,7] -> 3
    */

    /*
    �ⷨ���ݹ�ʵ��
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