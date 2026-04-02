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
    public ListNode doubleIt(ListNode head) {

         ListNode temp =head;

        if(head.val>=5){
            ListNode newhead = new ListNode(1);
            newhead.next = head;
            head =newhead;

        }

        int carry =0;

        while(temp!=null){
           
            temp.val = (temp.val*2)%10;
            if(temp.next!=null && temp.next.val>=5){
                temp.val =temp.val+1;
            }
          

            temp = temp.next;
        }
        return head;
        
    }
}