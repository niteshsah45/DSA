class Solution {
    public int maxVowels(String s, int k) {

        int count =0;

        int left=0,right=0;
        int maxi=0;
        int n = s.length();


        while(right<n){

            char c = s.charAt(right);

            if(String.valueOf(c).matches("[aeiou]")){

                count++;
            }

            if(right-left+1==k){

                maxi = Math.max(maxi,count);

                if(String.valueOf(s.charAt(left)).matches("[aeiou]")){
                    count--;
                }
                left++;
            }
            right++;
        }

        return maxi;
        
    }
}