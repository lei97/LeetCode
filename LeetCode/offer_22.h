#pragma once
#include "config.h"

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
    ListNode* getKthFromEnd(ListNode* head, int k) 
    {
        int size = 0;
        ListNode* tmp = head;
        vector<ListNode*> data;
        while (tmp != nullptr)
        {
            data.push_back(tmp);
            size = size + 1;
            tmp = tmp->next;
        }

        if (size >= k)
        {
            return data[size - k];
        }
        else
        {
            return nullptr;
        }
        
    }
};