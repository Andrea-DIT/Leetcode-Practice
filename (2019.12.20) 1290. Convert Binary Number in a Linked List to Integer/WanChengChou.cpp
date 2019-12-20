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
    int getDecimalValue(ListNode* head)
    {
        int sum = 0;
        while(head)
        {
            sum *= 2;
            if(head->val == 1) sum += 1;
            head = head->next;
        }
        return sum;
    }
};