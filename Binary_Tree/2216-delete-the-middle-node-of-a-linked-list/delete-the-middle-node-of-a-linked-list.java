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
    public ListNode deleteMiddle(ListNode head) {

        if(head==null || head.next==null) return null;


        int count =0;

        ListNode temp = head;
        while(temp!=null){
            count++;
            temp = temp.next;
        }

        int mid = count/2;
        int idx=0;

        temp = head;
        while(temp!=null){

            idx++;
            if(idx==mid){
                temp.next = temp.next.next;
                break;
            }
            temp = temp.next;
        }
        return head;
        
    }
}