#include"config.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class swapHead {
public:
    void swapHeadOfLast(ListNode* tmp)
    {
        if (tmp->next != nullptr)
        {
            int val;
            val = tmp->val;
            tmp->val = tmp->next->val;
            tmp->next->val = val;
        }
    }
    ListNode* swapPairs(ListNode* head)
    {
        ListNode* tmp = head;
        while (tmp != nullptr)
        {
            swapHeadOfLast(tmp);
            if ((tmp->next == nullptr) || (tmp->next->next == nullptr))
            {
                break;
            }
            else 
            {
                tmp = tmp->next->next;
            }
        }
        return head;
    }
};
