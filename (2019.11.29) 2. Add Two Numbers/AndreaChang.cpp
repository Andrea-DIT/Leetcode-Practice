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
        int sum = l1->val + l2->val;
        int digit = sum % 10;
        int carry = sum / 10;
        ListNode* lsum = new ListNode(digit);
        
        while (l1->next != NULL || l2->next != NULL) {
            if (l1->next == NULL) {
                sum = l2->next->val + carry;
                digit = sum % 10;
                push_back(lsum, digit);
                carry = sum / 10;
                l2 = l2->next;
                continue;
            }
            
            if (l2->next == NULL) {
                sum = l1->next->val + carry;
                digit = sum % 10;
                push_back(lsum, digit);
                carry = sum / 10;
                l1 = l1->next;
                continue;
            }
            
            sum = l1->next->val + l2->next->val + carry;
            digit = sum % 10;
            push_back(lsum, digit);
            carry = sum / 10;
            l1 = l1->next;
            l2 = l2->next;
        }
        
        if (carry == 1) { push_back(lsum, carry); }
        
        return lsum;
    }
    
    void push_back(ListNode* linked_list, int val) {
        ListNode* newNode = new ListNode(val);
        if (linked_list == NULL) {
            linked_list = newNode;
        }
        
        ListNode* current = linked_list;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
};
