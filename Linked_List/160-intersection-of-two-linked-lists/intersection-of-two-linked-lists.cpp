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
ListNode *collidePoint(ListNode * headA, ListNode *headB,int key){
    ListNode* temp1=headA;
    ListNode* temp2=headB;
    while(key){
        temp2=temp2->next;
        key--;
    }
    while(temp1!=NULL && temp2!=NULL){
        if(temp1==temp2) return temp1;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return nullptr;
}
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL) return nullptr;
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        int n1=0,n2=0;
        while(temp1!=NULL){
            n1++;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            n2++;
            temp2=temp2->next;
        }
        if(n1<n2){
            return collidePoint(headA,headB,n2-n1);
        }
        else{
            return collidePoint(headB,headA,n1-n2);
        }
        return nullptr;
    }
};