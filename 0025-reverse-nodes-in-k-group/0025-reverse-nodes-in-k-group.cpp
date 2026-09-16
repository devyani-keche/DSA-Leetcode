class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* knext = head;
        ListNode* prevGroup = nullptr;
        ListNode* newHead = head;

        do {

            int temp = k;
            ListNode* check = knext;

            // Check if k nodes are available
            while(temp > 0 && check != nullptr) {
                check = check->next;
                temp--;
            }

            // Less than k nodes → don't reverse
            if(temp > 0) {
                break;
            }

            // Save starting node of current group
            ListNode* groupStart = knext;

            ListNode* curr = knext;
            ListNode* prev = nullptr;

            // Reverse k nodes
            for(int i = 0; i < k; i++) {
                ListNode* next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }

            // First group → new head
            if(prevGroup == nullptr) {
                newHead = prev;
            }
            else {
                // Connect previous group to current group
                prevGroup->next = prev;
            }

            // Last node of current reversed group
            prevGroup = groupStart;

            // Beginning of next group
            knext = curr;

        } while(knext != nullptr);

        // Connect remaining nodes (< k) without reversing
        if(prevGroup != nullptr) {
            prevGroup->next = knext;
        }

        return newHead;
    }
};