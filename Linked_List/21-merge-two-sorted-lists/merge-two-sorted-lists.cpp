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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL) return nullptr;
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* dummyNode= new ListNode(-1);
        ListNode* resultNode=dummyNode;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val < temp2->val){
                resultNode->next=temp1;
                resultNode=temp1;
                temp1=temp1->next;
            }
            else{
                resultNode->next=temp2;
                resultNode=temp2;
                temp2=temp2->next;
            }
        }
        if(temp1) resultNode->next=temp1;
        else resultNode->next=temp2;
        return dummyNode->next;
    }
};