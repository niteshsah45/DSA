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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL) return 0;
        ListNode* temp=head;
        int count=0;
        int finale=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(count%2==1){
            finale=count/2+1;
        }
        else{
            finale=count/2+1;
        }
        temp=head;
        int ct=0;
        while(temp!=NULL){
            ct++;
            if(ct==finale){
                head=temp;
            }
            temp=temp->next;
        }
        return head; 
    }
};