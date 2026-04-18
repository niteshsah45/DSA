class Solution {
    public String longestCommonPrefix(String[] strs) {

        Arrays.sort(strs);

        String s1=strs[0];
        String s2= strs[strs.length-1];

        StringBuilder sb = new StringBuilder();

        int left=0,right=0;

        while(left<s1.length() && right<s2.length()){
            if(s1.charAt(left)==s2.charAt(right)){
                sb.append(s1.charAt(left));
            }
            else{
                break;
            }
            left++;
            right++;
        }

        String result = sb.toString();
        return result;
        
    }
}