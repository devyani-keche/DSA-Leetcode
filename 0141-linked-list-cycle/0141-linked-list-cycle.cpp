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
    bool hasCycle(ListNode *head) {
        if(head == nullptr) return false;
        if(head->next == nullptr) return false;
        ListNode* p1 = head;
        ListNode * p2= head->next;
        while(p1 != p2){
            if(p1 == NULL) return false;
            else {
                if(p1->next == nullptr) return false;
                p1 = p1->next;
            }

        if(p2 == NULL) return false;
            else {
                if(p2->next == nullptr||p2->next->next == nullptr) return false;
            p2 = p2->next->next;
            }
        }
        return true;
    }
};
        
    
