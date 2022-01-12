/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int getDecimalValue(struct ListNode* head){
    struct ListNode * temp= head;
    int n=0,i,sum=0;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    temp=head;
    for(i=n-1;i>=0;i--){
        sum+=(pow(2,i)*(temp->val));
        temp=temp->next;
    }
    return sum;
}