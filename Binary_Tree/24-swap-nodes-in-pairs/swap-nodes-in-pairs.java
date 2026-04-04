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
    public ListNode swapPairs(ListNode head) {

        if(head==null || head.next==null) return head;

        ListNode temp = head;

        int count =0;
        while(temp!=null){
            count++;
            temp = temp.next;
        }
        temp =head;

        int prevlast = temp.val;
        int prevfirst = temp.next.val;

        boolean check = true;

        while(temp!=null && temp.next!=null){ 

            prevfirst = temp.next.val;
            

            if(check){
                prevlast = temp.val;
                 temp.val=prevfirst;
            }
            else{
                temp.val=prevlast;
            }
            check=!check;

            temp=temp.next;
        }

        if(count%2==0) temp.val = prevlast;

        return head;
        
    }
}