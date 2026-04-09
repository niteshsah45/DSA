class Solution {
    public String reverseWords(String s) {


        String[] arr = s.trim().split("\\s+");

        int n = arr.length;

        String[] result = new String[n];
        int idx=0;

        for(int i=arr.length-1;i>=0;i--){

               result[idx++]=arr[i];
        }

         s = String.join(" ",result);
        return s;
        
    }
}