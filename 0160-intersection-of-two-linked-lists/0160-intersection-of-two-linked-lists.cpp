class Solution {
    static ListNode* checkIntersection (ListNode* head1, ListNode* head2){
        ListNode* p1 = head1;
        ListNode* p2 = head2;

        while(p1 != p2){
            if(p1 == NULL) p1 = head2;
            else p1 = p1->next;

            if(p2 == NULL) p2 = head1;
            else p2 = p2->next;
        }
        return p1;
    }

public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* intersect = checkIntersection(headA, headB);
        return intersect;
    }
};
