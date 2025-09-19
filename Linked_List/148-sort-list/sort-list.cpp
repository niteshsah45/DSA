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
    ListNode* sortList(ListNode* head) {
        if(head==NULL) return nullptr;
        if(head->next==NULL) return head;
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        vector<int> result(count);
        temp=head;
        int i=0;
        while(temp!=NULL && i<count){
            result[i]=temp->val;
            temp=temp->next;
            i++;
        }
        sort(result.begin(),result.end());
        int j=0;
        temp=head;
        while(temp!=NULL && j<count){
            temp->val=result[j];
            temp=temp->next;
            j++;
        }
        return head;
        
    }
};