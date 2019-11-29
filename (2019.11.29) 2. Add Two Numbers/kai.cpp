class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode *ptr_l1 = l1;
		ListNode *ptr_l2 = l2;

		ListNode *head = NULL;
		ListNode *curr = NULL;
		int into = 0;
		int l1_val = 0;
		int l2_val = 0;
		while (true){
			if (ptr_l1 == NULL && ptr_l2 == NULL && into == 0) break;

			struct ListNode* count = new ListNode(0);
			count->val = into;
			into = 0;

			if (head == NULL){
				head = count;
				curr = head;
			}
			else{
				curr->next = count;
				curr = curr->next;
			}

			if (ptr_l1 == NULL && ptr_l2 == NULL) break;

			l1_val = (ptr_l1 == NULL) ? 0 : ptr_l1->val;
			l2_val = (ptr_l2 == NULL) ? 0 : ptr_l2->val;
			into = (count->val + l1_val + l2_val >= 10) ? 1 : 0;
			count->val = (count->val + l1_val + l2_val) % 10;
			count->next = NULL;

			ptr_l1 = (ptr_l1 != NULL) ? ptr_l1->next : NULL;
			ptr_l2 = (ptr_l2 != NULL) ? ptr_l2->next : NULL;
		}
		return head;
	}
};