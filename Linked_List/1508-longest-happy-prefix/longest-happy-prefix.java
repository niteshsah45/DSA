class Solution {


    public int findLPS(String s, int[] arr, int n){

        int pre=0,suff=1;

        while(suff<n){

            if(s.charAt(suff)==s.charAt(pre)){

                arr[suff]=pre+1;
                pre++;
                suff++;
            }
            else{

                if(pre==0){

                    arr[suff]=0;
                    suff++;
                }
                else{
                    pre = arr[pre-1];
                }
            }
        }

        return arr[n-1];
    }
    public String longestPrefix(String s) {

        int n = s.length();



        int[] arr = new int[n];

        int ans = findLPS(s,arr,n);

        return s.substring(0,ans);
        
    }
}