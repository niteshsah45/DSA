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

void reverse(vector<int>& list,int start,int end){


    while(start<=end){
        swap(list[start],list[end]);
        start++;
        end--;
    }
}
    ListNode* rotateRight(ListNode* head, int k) {

        if(!head) return NULL;

        vector<int> listelem;
        ListNode* temp = head;

        while(temp){
            listelem.push_back(temp->val);
            temp = temp->next;
        }
        k = k % listelem.size();
        reverse(listelem,0,listelem.size()-1);
        reverse(listelem,0,k-1);
        reverse(listelem,k,listelem.size()-1);

        ListNode* result = new ListNode(0);
        ListNode* dummy = result;

        for(int i=0;i<listelem.size();i++){

            dummy->next = new ListNode(listelem[i]);
            dummy = dummy->next;
        }
        return result->next;

    }
};