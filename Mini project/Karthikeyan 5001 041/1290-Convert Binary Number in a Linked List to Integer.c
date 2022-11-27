/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head){
	int decimal = 0,i=0,n;
	int a[50];
	while(head != NULL){
		a[i] = head->val;
		head = head->next;i++;
	}
	// decimal = decimal + ( head->val << i++) ;
	n=i;
	i=0;
	for(int j=n-1; j>=0; j--){
		decimal  = decimal +  (a[j] << i++) ;
	}
	return decimal;
}
