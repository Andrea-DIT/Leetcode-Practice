class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
               
        int carry = 0;
        int sum = 0;
        
        ListNode* ans = new ListNode(0);
        ListNode* digit = ans;
            
        while(l1 != NULL || l2 != NULL)
        {
            int n1 = 0; 
            if(l1 != NULL)
                n1 = l1->val;
            int n2 = 0;
            if(l2 != NULL)
                n2 = l2->val;
            
            sum = n1 + n2 + carry;
            carry = (int)(sum/10);
            sum = sum%10;
            
            digit->next = new ListNode(sum);
            digit = digit->next;
            
            if(l1 != NULL)
                l1 = l1->next;
            if(l2 != NULL)
                l2 = l2->next;

        }
        
        if(carry>0)
        {
            digit->next = new ListNode(carry);
            digit = digit->next;
        }         
        return ans->next;
    }

};
