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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* nextNode = nullptr;

        while (curr != nullptr) {
            nextNode = curr->next;  // Store next node
            curr->next = prev;      // Reverse the link
            prev = curr;            // Move prev to current node
            curr = nextNode;        // Move to next node
        }
        return prev;  // New head of reversed list
    }
};