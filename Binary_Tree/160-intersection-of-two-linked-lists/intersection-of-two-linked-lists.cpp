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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        unordered_set<ListNode*> st;

        ListNode* temp1 = headA;
        ListNode* tepp2 = headB;

        while(temp1!=NULL){
            st.insert(temp1);
            temp1=temp1->next;
        }

        while(headB!=NULL){

            if(st.find(headB)!=st.end()) return headB;
            headB = headB->next;
        }
        return NULL;
    }
};