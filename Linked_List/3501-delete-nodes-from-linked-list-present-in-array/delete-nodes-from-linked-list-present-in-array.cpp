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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if(head==NULL) return nullptr;
        unordered_set<int> st(nums.begin(),nums.end());
        ListNode* dummy = new ListNode(-1,head);
        ListNode* prev= dummy;
        while(prev->next!=NULL){
            int val =prev->next->val;
            if(st.count(val)){
                prev->next=prev->next->next;
            }
            else{
                prev=prev->next;
            }
        }
        return dummy->next;
    }
};