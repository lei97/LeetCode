#pragma once
#include"config.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteNode(ListNode* head, int val) 
    {
        ListNode* frist = new ListNode{0};
        frist->next = head;
        ListNode* postion = frist;
        while (head)
        {
            if (head->val == val)
            {
                postion->next = head->next;
                ListNode* tmp = frist->next;
                delete frist;
                return tmp;
            }
            postion = postion->next;
            head = head->next;            
        }
        ListNode* tmp = frist->next;
        delete frist;
        return tmp;
    }
};