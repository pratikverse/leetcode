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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head || !head->next){
        return nullptr;
        }
        ListNode* temp = head;
        int count = 0;
        while(temp!=nullptr){
            temp=temp->next;
            count = count+1;
        }
        ListNode* start = head;
        int position = count-n;
        if(position==0){
            head=head->next;
        }
        for(int i = 0;i<position-1;i++){
            start = start->next;
            
        }
        
        start->next = start->next->next;
        return head;
    }
};