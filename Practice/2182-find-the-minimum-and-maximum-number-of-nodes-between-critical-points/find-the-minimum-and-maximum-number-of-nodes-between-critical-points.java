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

        //List<Integer> st = new ArrayList<>();

        int prevcritical=0,firstcritical=0;
        int mini=Integer.MAX_VALUE;
        int maxi=Integer.MIN_VALUE;
        boolean check=false;

        ListNode temp = head.next;
        int[] ans = {-1,-1};

        ListNode prev = head;


        int count=1;

        while(temp.next!=null){

            count++;

                if(prev.val>temp.val && temp.next.val>temp.val ||
                    prev.val<temp.val && temp.next.val<temp.val){

                    if(!check){
                        firstcritical=count;
                        prevcritical=count;
                        check=true;
                    }
                    else{

                        mini = Math.min(mini,count-prevcritical);

                        prevcritical=count;
                    }

                }  

                prev=temp;
                temp = temp.next;
        }
        // Collections.sort(st);
        // int len = st.size();

        // if(len<2) return ans;
        // System.out.print(st.get(0));

        // int maxi = st.get(len-1)-st.get(0);

        // int mini =Integer.MAX_VALUE;

        // for(int i=0;i<len-1;i++){

        //     int result = st.get(i+1)-st.get(i);

        //     if(result<mini){

        //         mini=result;
        //     }
        // }

        if(!check || firstcritical==prevcritical) return ans;

        maxi = prevcritical-firstcritical;
        ans[0]=mini;
        ans[1]=maxi;
        return ans;

    }
}