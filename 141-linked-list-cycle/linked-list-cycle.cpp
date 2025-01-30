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
        if (!head || !head->next) return false; // Edge case handling

        ListNode* slow = head;
        ListNode* fast = head->next; // Slight optimization to avoid redundant checks

        while (fast && fast->next) {
            if (slow == fast) return true; // Check inside loop for early return
            
            slow = slow->next;
            fast = fast->next->next;
        }
        return false;
    }
};