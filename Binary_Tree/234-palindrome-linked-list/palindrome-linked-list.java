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
    public boolean isPalindrome(ListNode head) {

        if(head==null || head.next==null) return true;

        StringBuilder sb = new StringBuilder();

        ListNode temp = head;
        while(temp!=null){

            sb.append((char)temp.val);
            temp = temp.next;
        }

        int start=0,end=sb.length()-1;
        while(start<end){

            if(sb.charAt(start)!=sb.charAt(end)) return false;
            start++;
            end--;
        }
        return true;
        
    }
}