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
    int getDecimalValue(ListNode* head) {
        ListNode *curr = head;
        int output = 0;
        while(curr != NULL){
            output = 2*output + curr->val;
            curr = curr->next;
        }
        return output;
    }
};