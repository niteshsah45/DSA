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
    bool isPalindrome(ListNode* head) {
        string result="";
        ListNode* temp=head;
        while(temp!=NULL){
            result+=to_string(temp->val);
            temp=temp->next;
        }
        int start=0;
        int end=result.size()-1;
        int n=result.size();
        while(start<=end){
            if(result[start]==result[end]){
                start++;
                end--;
            }
            else return false;
        }
        return true;
    }
};