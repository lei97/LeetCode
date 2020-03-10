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
    ������06. ��β��ͷ��ӡ����
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