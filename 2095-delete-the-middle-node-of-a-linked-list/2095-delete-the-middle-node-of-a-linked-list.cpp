/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int n=0;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        if (n==1) return NULL;
        n = n/2;
        temp=head;
        for(int i=0;i<n-1;i++){
            temp=temp->next;
        }
        if(temp->next->next !=NULL && temp->next!=NULL)temp->next=temp->next->next;
        else temp->next=NULL;
        return head;
    }
};