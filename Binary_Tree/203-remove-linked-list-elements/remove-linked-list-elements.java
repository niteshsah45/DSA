/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeElements(ListNode head, int val) {

        if(head==null) return null;
        ListNode temp = head;
        ListNode dummy = new ListNode(0);
        ListNode ans = dummy;

        while(temp!=null){
            if(temp.val!=val){
                dummy.next= new ListNode(temp.val);
                dummy = dummy.next;
            }
            temp = temp.next;
        }
        return ans.next;
        
    }
}