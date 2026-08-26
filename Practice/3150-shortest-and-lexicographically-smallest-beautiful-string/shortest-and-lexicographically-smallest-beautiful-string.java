class Solution {
    public String shortestBeautifulSubstring(String s, int k) {

        int left=0,right=0;
        int n = s.length();

        if(k==1 && s.contains("1")) return "1";
        if(k==1) return "";

        int len=0;
        int count1=0;
        int leftmin=0,rightmin=0;

        String ans="";

        boolean check=true;


        while(right<n){
            if(s.charAt(right)=='1'){
                count1++;
            }
            while(count1>k || (s.charAt(left)=='0' && left<right)){
                if(s.charAt(left)=='1') count1--;
                left++;
            }
            // if(count1==k && leftmin-rightmin==0){
            //         leftmin=left;
            //         rightmin=right;
            //         check=false;
            // }
            if(count1==k){

                String current = s.substring(left,right+1);



                if(ans=="" || current.length()<ans.length() || (current.length()==ans.length() && current.compareTo(ans)<0)){
                    ans=current;
                }
            }
            right++;
        }
        return ans;
        
    }
}