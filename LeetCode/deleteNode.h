#pragma once
#include"config.h"

class deleteNode
{
    /*
        ʹ�����ɾ��ĳ�������и����ģ���ĩβ���ڵ㣬�㽫ֻ������Ҫ��ɾ���Ľڵ㡣
        ����һ������ -- head = [4,5,1,9]��
        ����: head = [4,5,1,9], node = 5
        ���: [4,1,9]
        ˼·������node�ڵ�
    */
    void source(ListNode* node)
    {
        ListNode* p = node->next;
        node->val = p->val;
        node->next = p->next;
        delete p;
    }
};