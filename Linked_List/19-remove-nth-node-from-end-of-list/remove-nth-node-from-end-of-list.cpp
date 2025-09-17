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
        if(head->next==nullptr) return NULL;
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(count==n){
            return head=head->next;
        }
        int cnt=count-n;
        temp=head;
        int k=0;
        ListNode* newNode;
        while(temp!=NULL){
            k++;
            if(k==cnt){
                newNode=temp->next;
                temp->next=temp->next->next;
                delete newNode;
                break;
            } 
            temp=temp->next;           
        }
        return head;
        
    }
};