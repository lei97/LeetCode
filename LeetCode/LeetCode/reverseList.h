#pragma once
#include"config.h"


class reverseList {
public:
    ListNode* Solution(ListNode* head) 
    {
        ListNode* inNode = head;
        ListNode* tmpNode = nullptr;
        while (inNode)
        {
            ListNode* tmp = new ListNode(inNode->val);
            tmp->next = tmpNode;
            tmpNode = tmp;
            //if (tmpNode->next != nullptr)
            //{
            //    tmp->next = tmpNode;
            //    tmpNode = tmp;
            //}
            //else
            //{
            //    tmp->next = tmpNode;
            //    tmpNode = tmp;
            //}
            inNode = inNode->next;
        }
        return tmpNode;
    }
};