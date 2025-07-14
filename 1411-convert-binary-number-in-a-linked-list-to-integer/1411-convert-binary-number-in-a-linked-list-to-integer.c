/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    int counter=0,dec=0;
    struct ListNode* temp=head;
    while(temp->next!=NULL){
        counter++;
        temp=temp->next;
    } 
    temp=head;
    while(temp!=NULL){
        dec+=pow(2,counter)*temp->val;
        counter--;
        temp=temp->next;
    }
    return dec;
}