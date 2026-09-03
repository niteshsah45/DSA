class Solution {
    public boolean uniformArray(int[] nums1) {

        int mini = Integer.MAX_VALUE;

        for(int x:nums1){

            mini = Math.min(mini,x);
        }

        if(mini%2==1){
            return true;
        }
        else{

            for(int x:nums1){
                if(x%2==1) return false;
            }
        }


        return true;

        
    }
}