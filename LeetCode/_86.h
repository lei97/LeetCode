#pragma once
#include "config.h"
#include <deque>

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* left = head;
        //int right = 0;
        std::deque<int> num;
        ListNode* node = head;
        while (head)
        {
            if (head->val >= x)
            {
                num.push_back(head->val);
            }
            else
            {         
                if (left != head)
                {
                    left->val = head->val;                
                }
                left = left->next;
            }
            head = head->next;
        }

        while (left)
        {
            left->val = num.front();
            num.pop_front();
            left = left->next;
        }

        return node;
    }
};