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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {

        int carry=0;

        if(l1==null && l2==null) return null;

        ListNode temp1= l1;
        ListNode temp2=l2;

        ListNode dummy = new ListNode(0);
        ListNode ans = dummy;
        int sum=0;

        while(temp1!=null || temp2!=null){

            sum=carry;

            if(temp1!=null){
                sum+= temp1.val;
                temp1=temp1.next;
            }
            if(temp2!=null){
                sum+=temp2.val;
                temp2=temp2.next;
            }

            carry = sum/10;
            sum = sum%10;

            dummy.next = new ListNode(sum);
            dummy = dummy.next;

            
        }
        if(carry>=1){
            dummy.next = new ListNode(carry);
        }
        return ans.next;
        
    }
}