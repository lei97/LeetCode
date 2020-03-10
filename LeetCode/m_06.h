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
/*
    面试题06. 从尾到头打印链表
*/
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        vector<int> data;
        while (head)
        {
            data.push_back(head->val);
            head = head->next;
        }
        std::reverse(data.begin(), data.end());
        return data;
    }
};