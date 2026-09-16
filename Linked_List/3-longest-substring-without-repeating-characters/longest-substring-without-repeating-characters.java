class Solution {
    public int lengthOfLongestSubstring(String s) {

        int n = s.length();

        int[] freq = new int[256];

        int maxi=0;

        int left=0,right=0;

        while(right<n){

            freq[s.charAt(right)]++;


            if(freq[s.charAt(right)]>1){

                while(freq[s.charAt(right)]>1){

                    

                    freq[s.charAt(left)]--;
                    left++;

                }
            }

            maxi = Math.max(maxi,right-left+1);

            right++;
        }

        return maxi;
        
    }
}