#pragma once
#include"config.h"

class deleteNode
{
    /*
        使其可以删除某个链表中给定的（非末尾）节点，你将只被给定要求被删除的节点。
        现有一个链表 -- head = [4,5,1,9]，
        输入: head = [4,5,1,9], node = 5
        输出: [4,1,9]
        思路：跳过node节点
    */
    void source(ListNode* node)
    {
        ListNode* p = node->next;
        node->val = p->val;
        node->next = p->next;
        delete p;
    }
};