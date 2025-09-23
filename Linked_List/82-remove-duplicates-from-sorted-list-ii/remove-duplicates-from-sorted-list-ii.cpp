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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return nullptr;
        if(head->next==NULL) return head;
        ListNode* dummy= new ListNode(-1,head);
        ListNode* currentNode=head;
        ListNode* prevNode=dummy;

        while(currentNode!=NULL){
            bool duplicate=false;

            while( currentNode->next && currentNode->val== currentNode->next->val){
                duplicate=true;
                currentNode=currentNode->next;
            }
            if(duplicate){
                prevNode->next=currentNode->next;
            }
            else{
                prevNode=prevNode->next;
            }
            currentNode=currentNode->next;
        }
        return dummy->next;
    }
};