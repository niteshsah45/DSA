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
ListNode* reverseHalf(ListNode* temp){
    ListNode* prev=nullptr;
    while(temp!=NULL){
        ListNode* nextNode= temp->next;
        temp->next=prev;
        prev=temp;
        temp=nextNode;
    }
    return prev;
}
    int pairSum(ListNode* head) {
        if(head==NULL) return 0;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* reversedTemp= reverseHalf(slow);
        ListNode* temp=head;
        int sum=0;
        int maxi= 0;
        while(reversedTemp!=NULL){
            sum = temp->val+reversedTemp->val;
            if(sum>maxi){
                maxi=sum;
            }
            temp=temp->next;
            reversedTemp=reversedTemp->next;
        }
        return maxi;
    }
};