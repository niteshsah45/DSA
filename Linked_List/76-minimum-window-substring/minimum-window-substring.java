class Solution {
    public String minWindow(String s, String t) {

        int n1 = t.length();
        int n2 = s.length();

        if(n1>n2) return "";

        int[] freq = new int[128];
      
        for(int i=0;i<n1;i++){

            freq[t.charAt(i)]++;
        }


        int left=0,right=0;

        int required=n1;

        int minlen= Integer.MAX_VALUE;

        int start=0;
       while(right<n2){

        char c = s.charAt(right);

        if(freq[c]>0) required--;

        freq[c]--;

        while(required==0){

            if(right-left<minlen){

                minlen = right-left;

                start=left;
            }

            char ch = s.charAt(left);
                freq[ch]++;
            if(freq[ch]>0) required++;

            left++;
        }

        right++;
       }  

      return minlen==Integer.MAX_VALUE ? "" : s.substring(start,start+minlen+1);    
    }

}