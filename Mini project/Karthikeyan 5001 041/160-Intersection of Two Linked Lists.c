/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
	struct ListNode *ptrb = headB;int flag =0;
	while(headA != NULL){
		while(ptrb != NULL){
			if(headA == ptrb){
				flag =1;
				break;
			}
			ptrb = ptrb->next;
		}
		if(flag == 1) break;
		headA = headA->next;
		ptrb = headB;
	}
	if(flag == 0) return NULL;
	else return ptrb;
}
