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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL) return nullptr;
        if(head->next==NULL) return head;
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
             count++;
             temp=temp->next;
        }
        int left=k;
        int right =count-k+1;
        int cntLeft=0,cntRight=0;
        ListNode* firstNode=nullptr;
        ListNode* lastNode=nullptr;
        int firstVal=-1;
        int lastVal=-1;
        temp=head;
        while(temp!=NULL){
            cntLeft++;
            cntRight++;
            if(cntLeft==left){
                firstVal=temp->val;
                firstNode=temp;
            }
            if(cntRight==right){
                lastVal=temp->val;
                lastNode=temp;
               if(firstVal!=-1) break;
            }
            temp=temp->next;
        } 
        firstNode->val=lastVal;
        lastNode->val=firstVal;
        return head;
    }
};