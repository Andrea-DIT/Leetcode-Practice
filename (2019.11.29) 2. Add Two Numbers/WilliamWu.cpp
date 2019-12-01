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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
              
        ListNode* tmp = new ListNode(0);
        ListNode* now = tmp;
        
        int carry = 0;
        while(l1!=NULL || l2!=NULL || carry!=0)
        {
            int num1 = 0;
            int num2 = 0;
            if(l1)
                num1 = l1->val;
            if(l2)
                num2 = l2->val;
            
            int sum = num1 + num2 + carry;
            carry = (int)(sum / 10);
            sum %= 10;
            
            now->next = new ListNode(sum);
            now = now->next;
            
            if(l1)
                l1 = l1->next;
            if(l2)
                l2 = l2->next;
        }
        
        ListNode* ans = tmp->next;
        delete tmp;
        return ans;
    }
};
