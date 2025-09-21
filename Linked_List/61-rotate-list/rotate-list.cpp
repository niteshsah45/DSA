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
        temp=head;
        vector<int> result(count);
        int i=0;
        while(temp!=NULL){
            result[i]=temp->val;
            temp=temp->next;
            i++;
        }
        int last=k%count;
        reverse(result.begin(),result.end());
        reverse(result.begin(),result.begin()+last);
        reverse(result.begin()+last,result.end());
        temp=head;
        int j=0;
        while(temp!=NULL){
            temp->val=result[j];
            temp=temp->next;
            j++;
        }
        return head;
    }
};