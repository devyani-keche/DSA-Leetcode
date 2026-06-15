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
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // First list head
        ListNode* first = head;

        // Second half starts here
        ListNode* second = slow->next;

        // Split
        slow->next = NULL;

        // Reverse second half
        ListNode* prev = NULL;
        while (second != NULL) {
            ListNode* nextNode = second->next;
            second->next = prev;
            prev = second;
            second = nextNode;
        }

        int maxi = INT_MIN;

        while (prev && first) {
            maxi = max(maxi, prev->val + first->val);
            prev = prev->next;
            first = first->next;
        }
        return maxi;
    }
};