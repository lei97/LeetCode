#include"config.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class addTwoNumbers {
public:
    ListNode* Solution(ListNode* l1, ListNode* l2) {
        ListNode* tmp = new ListNode(0);
        ListNode* tmpR = tmp;
        ListNode* inL1 = l1;
        ListNode* inL2 = l2;
        while (inL1 != nullptr && inL2 != nullptr)
        {          
            if (inL1->next != nullptr || inL2->next != nullptr)
            {
                if (inL1->next == nullptr)
                {
                    tmp->val = tmp->val + inL1->val;
                    while (inL2)
                    {
                        tmp->val = tmp->val + inL2->val;
                        if ((inL2->next != nullptr) || (tmp->val >= 10))
                        {
                            ListNode* node = new ListNode(0);
                            if (tmp->val >= 10)
                            {
                                tmp->val = tmp->val - 10;
                                node->val = 1;
                            }
                            tmp->next = node;
                            tmp = tmp->next;
                        }
                        inL2 = inL2->next;
                    }
                }
                else if (inL2->next == nullptr)
                {
                    //[9,8] ,[1], [0,1,8]
                    tmp->val = tmp->val + inL2->val;
                    while (inL1)
                    {
                        tmp->val = tmp->val + inL1->val;
                        if ((inL1->next != nullptr) || (tmp->val >= 10))
                        {
                            ListNode* node = new ListNode(0);
                            if (tmp->val >= 10)
                            {
                                tmp->val = tmp->val - 10;
                                node->val = 1;
                            }
                            tmp->next = node;
                            tmp = tmp->next;
                        }
                        inL1 = inL1->next;
                    }
                }
                else
                {
                    tmp->val = inL1->val + inL2->val + tmp->val;
                    if (tmp->val >= 10)
                    {
                        ListNode* dev = new ListNode(1);
                        tmp->val = tmp->val - 10;
                        tmp->next = dev;
                    }
                    if (tmp->next == nullptr)
                    {
                        ListNode* dev = new ListNode(0);
                        tmp->next = dev;
                    }
                    tmp = tmp->next;
                    inL1 = inL1->next;
                    inL2 = inL2->next;
                }
            }
            else
            {
                tmp->val = inL1->val + inL2->val + tmp->val;
                if (tmp->val >= 10)
                {
                    ListNode* dev = new ListNode(1);
                    tmp->val = tmp->val - 10;
                    tmp->next = dev;
                }
                break;
            }
        }
        return tmpR;
    }
};
