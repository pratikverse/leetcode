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
        if(!head || !head->next){
        return nullptr;
        }
        ListNode* temp = head;
        int count = 0;
        while(temp!=nullptr){
            temp=temp->next;
            count = count+1;
        }
        temp = head;
        int position = (count/2);
        if(position==0){
            head=head->next;
        }
        for(int i = 0;i<position-1;i++){
            temp = temp->next;
            
        }
        temp->next = temp->next->next;
        return head;
    }
};