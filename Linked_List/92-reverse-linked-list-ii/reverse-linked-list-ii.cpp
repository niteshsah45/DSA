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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL) return nullptr;
        if(head->next==NULL) return head;
        ListNode* dummy = new ListNode(0,head);
        ListNode* prev=dummy;
        for(int i=1;i<left;i++){
            prev=prev->next;
        }
        ListNode* start=prev->next;
        ListNode* curr=start->next;
        for(int i=0;i<right-left;++i){
            start->next=curr->next;
            curr->next=prev->next;
            prev->next=curr;
            curr=start->next;
        }
        return dummy->next;    
    }
};