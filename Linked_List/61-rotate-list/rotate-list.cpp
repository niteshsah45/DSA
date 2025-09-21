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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return nullptr;
        if(head->next==NULL) return head;
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(k==count) return head;
        if(k>count) k=k%count;
        int last=count-k;
        ListNode* tailAdd=head;
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=tailAdd;
        temp=head;
        long long cnt=0;
        ListNode* newNode;
        while(temp!=NULL){
            cnt++;
            if(cnt==last){
                 head=temp->next;
                temp->next=nullptr;
            }
            temp=temp->next;
        }
        return head;
    }
};