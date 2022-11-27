/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){
	if(head == NULL) return head;
	struct ListNode *ptr = head->next,*prev = head;
	int flag =0;
	while(prev != NULL){
		while(ptr != NULL){
			if(prev->val == ptr->val){
				prev->next = ptr->next;
				if(ptr->next == NULL){
					flag = 1; break;

				}
				ptr = ptr->next;
			}
			if(ptr->val != prev->val)
				break;
			if(flag == 1) break;

		}
		if(flag == 1) return head;
		prev = prev->next;
	}
	return head;
}
