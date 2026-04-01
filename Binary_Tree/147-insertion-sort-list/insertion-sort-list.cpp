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
    ListNode* insertionSortList(ListNode* head) {

        if(head==NULL || head->next==NULL) return head;

        ListNode* temp =head;

        int count=0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        temp = head;

        for(int i=0;i<count-1;i++){

            temp =head;

            for(int j=0;j<count-i-1;j++){
                if(temp->val>temp->next->val){
                    swap(temp->val,temp->next->val);
                }
                temp = temp->next;
            }
        }
        return head;

        
    }
};