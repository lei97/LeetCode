#pragma once
#include"config.h"

class mergeTwoLists {
    /*
        ����������������ϲ�Ϊһ���µ������������ء���������ͨ��ƴ�Ӹ�����������������нڵ����
    */
    ListNode* source(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* data = head;
        
        if (l1 == nullptr)
        {
            return l2;
        }
        if (l2 == nullptr)
        {
            return l1;
        }
        while (l1 || l2)
        {
            if (l1->val <= l2->val)
            {
                data->next = l1;
                l1 = l1->next;
                data = data->next;

            }
            else
            {
                data->next = l2;
                l2 = l2->next;
                data = data->next;
            }

            if (l1 == nullptr)
            {
                data->next = l2;
                return head->next;
            }
            if (l2 == nullptr)
            {
                data->next= l1;
                return head->next;
            }
        }
        return head->next;
    }
};