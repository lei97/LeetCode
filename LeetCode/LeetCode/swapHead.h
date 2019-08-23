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
    void Solution(ListNode* tmp)
    {
        if (tmp->next != nullptr)
        {
            swap(tmp->val, tmp->next->val);
        }
    }
    ListNode* swapPairs(ListNode* head) 
    {
        ListNode* tmp = head;
        while (tmp != nullptr)
        {
            swapHead(tmp);
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
