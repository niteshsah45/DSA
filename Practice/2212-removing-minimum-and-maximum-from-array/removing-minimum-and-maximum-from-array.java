class Solution {
    public int minimumDeletions(int[] nums) {

        int miniindex=0,maxiindex=0;
        int maxele = Integer.MIN_VALUE,minele = Integer.MAX_VALUE;
    

        int n = nums.length;

        if(n==1) return 1;

        for(int i=0;i<n;i++){

            if(nums[i]>maxele){
                maxiindex=i;
                maxele=nums[i];
            }
            if(nums[i]<minele){
                miniindex=i;
                minele=nums[i];
            }
        }

        int bothfront = Math.max(miniindex,maxiindex)+1;

        int bothback = n- Math.min(miniindex,maxiindex);

        int onebackonefront = Math.min(miniindex,maxiindex)+1 + n-Math.max(miniindex,maxiindex);

        return Math.min(bothfront,Math.min(bothback,onebackonefront));
    }
}