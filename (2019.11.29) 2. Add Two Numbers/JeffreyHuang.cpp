/*
學生時期面試大M的時候白板題有考這題XD
*/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *output = new ListNode(0);
        int carry = 0;
        ListNode *o = output;
        
        while(1)
        {
            output->next = new ListNode(0);
            output->val = l1->val + l2->val + carry;

            if (output->val >= 10)
            {
                output->val -= 10;
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            
            if (l1->next == NULL && l2->next == NULL)
            {
                if (carry == 1)
                {
                    output->next->val = 1;
                }
                else
                {
                    output->next = NULL;
                }
                break;
            }
            else if(l1->next == NULL)
            {
                l1->next = new ListNode(0);
            }
            else if(l2->next == NULL)
            {
                l2->next = new ListNode(0);
            }
            output = output->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        return o;
    }
};