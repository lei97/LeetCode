#pragma once
#include"config.h"


class reverseList {
public:
    ListNode* Solution(ListNode* head) 
    {
        // ��ʽ1

        //ListNode* inNode = head;
        //ListNode* tmpNode = nullptr;
        //while (inNode)
        //{
        //    ListNode* tmp = new ListNode(inNode->val);
        //    tmp->next = tmpNode;
        //    tmpNode = tmp;
        //    //if (tmpNode->next != nullptr)
        //    //{
        //    //    tmp->next = tmpNode;
        //    //    tmpNode = tmp;
        //    //}
        //    //else
        //    //{
        //    //    tmp->next = tmpNode;
        //    //    tmpNode = tmp;
        //    //}
        //    inNode = inNode->next;
        //}
        //return tmpNode;

        // ��ʽ2
        ListNode* front = new ListNode(0);

        while (head)
        {
            ListNode* tmp = head->next;
            head->next = front->next;
            front->next = head;           
            head = tmp;
        }

        ListNode* tmp = front->next;
        delete front;
        return tmp;
    }
};