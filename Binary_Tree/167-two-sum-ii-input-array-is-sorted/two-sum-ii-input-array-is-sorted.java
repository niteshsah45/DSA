class Solution {
    public int[] twoSum(int[] numbers, int target) {

        int n = numbers.length;

        int[] ans = {0,0};

        int start=0,end=n-1;

        while(start<end){

            int sum = numbers[start]+numbers[end];

            if(sum==target){
                ans[0] = start+1;
                ans[1] = end+1;
                return ans;
            }

            if(sum>target){
                end--;
            }
            else{
                start++;
            }


        }
        return ans;
        
    }
}