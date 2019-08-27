#include"removeElement.h"
#include"findMedianSortedArrays.h"
#include"reverse.h"
#include"reverseList.h"

int main()
{
    reverseList RL;
    ListNode* List = new ListNode(0);
    ListNode* List1 = List;
    for (size_t i = 1; i < 6; i++)
    {
        ListNode* node = new ListNode(i);
        List->next = node;
        List = List->next;
    }
    RL.Solution(List1);
    //reverse R;
    //int num = R.Solution(1534236469);
    return 0;
}