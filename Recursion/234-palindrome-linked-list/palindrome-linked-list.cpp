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
ListNode* left;
bool check(ListNode* right){
    if (right==nullptr) return true;

    bool isPalin= check(right->next);
    if(!isPalin) return false;

    if(left->val!=right->val) return false;
    left = left->next;
    return true;
}
    bool isPalindrome(ListNode* head) {
        if(head->next==nullptr) return true;
        left =head;
        return check(head);
    }
};