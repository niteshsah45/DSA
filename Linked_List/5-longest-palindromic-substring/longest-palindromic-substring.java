class Solution {


    public boolean checkpalin(String s, int start, int end){


        while(start<=end){

            char c1 = s.charAt(start);
            char c2 = s.charAt(end);

            if(c1==c2){
                start++;
                end--;
            }
            else return false;
        }
        return true;
    }
    public String longestPalindrome(String s) {

        int startleft = Integer.MIN_VALUE;
         int endright = Integer.MIN_VALUE;

         int maxilen = Integer.MIN_VALUE;   



        int n = s.length();

        if(n==1) return s;

        for(int i=0;i<n;i++){

            for(int j=i;j<n;j++){


                if(checkpalin(s,i,j) && (j-i+1) > maxilen){

                   startleft = i;
                   endright = j;
                   maxilen = j-i+1;
                }
            }
        } 

        return maxilen==Integer.MIN_VALUE ? "" : s.substring(startleft,endright+1);        
    }
}