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
ListNode* reverseNode(ListNode* temp){
    ListNode* nextNode;
    ListNode* prev=nullptr;
    while(temp!=NULL){
        nextNode= temp->next;
        temp->next=prev;
        prev=temp;
        temp=nextNode;
    }
    return prev;
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL && l2==NULL ) return nullptr;
        
        l1= reverseNode(l1);
        l2= reverseNode(l2);
        ListNode* dummy = new ListNode(-1);
        ListNode* curr=dummy;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry){
            int sum = carry;
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            carry= sum/10;
            curr->next=new ListNode(sum%10);
            curr=curr->next;
        }
        return reverseNode(dummy->next);
    }
};