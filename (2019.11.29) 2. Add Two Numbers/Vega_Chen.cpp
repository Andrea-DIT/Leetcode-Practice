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
        ListNode *ans = new ListNode(0);
        ListNode *p = ans;
        int carry = 0;
        
        while(l1!=NULL || l2!=NULL){
            int sum = l1->val + l2->val + carry;
            int sum_half = sum%10;
            carry = sum/10;
            
            p->next = new ListNode(sum_half);
            p = p->next;
            l1 = l1->next;
            l2 = l2->next;
            
            if(l1 == NULL && l2!=NULL) l1 = new ListNode(0);
            if(l1 != NULL && l2==NULL) l2 = new ListNode(0);
        }        
        if(carry!=0)
            p->next = new ListNode(carry);
        
        return ans->next;
    }
};