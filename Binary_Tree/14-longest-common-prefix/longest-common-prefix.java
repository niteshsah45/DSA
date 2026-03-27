class Solution {
    public String longestCommonPrefix(String[] strs) {

        if(strs==null || strs.length==0) return "";

        String prefix = strs[0];

        for(int i=0;i<prefix.length();i++){
            char ch = strs[0].charAt(i);

            for(int j=1;j<strs.length;j++){

                if(i>=strs[j].length() || strs[j].charAt(i)!=ch){
                    return strs[0].substring(0,i);
                }
            }
        }
        return strs[0];
        
    }
}