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
int findGreat(int a, int b){

    int min =0;
    if(a<b) min = a;
    else min = b;
    int ans =1;

    for(int i=1;i<=min;i++){

        if(a%i==0 && b%i==0) ans=i;
    }
    return ans;
}
    ListNode* insertGreatestCommonDivisors(ListNode* head) {

        if(head==NULL || head->next==NULL) return head;

        ListNode* temp = head;

        ListNode* nextNode=NULL;

        while(temp!=NULL && temp->next!=NULL){

            nextNode = temp->next;

            int great = findGreat(temp->val,temp->next->val);

            ListNode* curr = new ListNode(great);

            temp->next = curr;
            curr->next = nextNode;
            temp = nextNode;
        }
        return head;
        
    }
};