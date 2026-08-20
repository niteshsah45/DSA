class Solution {
    public int[] resultArray(int[] nums) {

        


        int n = nums.length;
        int[] result = new int[n];

        if(n<=1) return result;
        result[0] = nums[0];
        result[n-1]=nums[1];

        int right=n-2,left=1;
        for(int i=2;i<n;i++){

            if(result[left-1]>result[right+1]){
                result[left++]=nums[i];
            }
            else{
                result[right--]=nums[i];
            }

        }

        int end=n-1;
        right++;

        for(int x:result) System.out.print(x+" ");

        while(right<end){

            int temp = result[right];
            result[right] = result[end];
            result[end]=temp;

            right++;
            end--;
        }


        return result;
        
    }
}