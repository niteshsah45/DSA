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
    public int[] nodesBetweenCriticalPoints(ListNode head) {

        List<Integer> st = new ArrayList<>();

        ListNode temp = head.next;
        int[] ans = {-1,-1};

        ListNode prev = head;

        int count=1;

        while(temp.next!=null){

            count++;

                if(prev.val>temp.val && temp.next.val>temp.val){
                    st.add(count);
                }
                else if(prev.val<temp.val && temp.next.val<temp.val){

                    st.add(count);
                }

            prev=temp;
            temp = temp.next;
        }
        Collections.sort(st);
        int len = st.size();

        if(len<2) return ans;
        System.out.print(st.get(0));

        int maxi = st.get(len-1)-st.get(0);

        int mini =Integer.MAX_VALUE;

        for(int i=0;i<len-1;i++){

            int result = st.get(i+1)-st.get(i);

            if(result<mini){

                mini=result;
            }
        }
        ans[0]=mini;
        ans[1]=maxi;
        return ans;

    }
}