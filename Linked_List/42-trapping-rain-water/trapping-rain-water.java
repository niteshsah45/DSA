class Solution {
    public int trap(int[] height) {


        int totalwater=0;

        int n = height.length;

        int leftMaxHeight=0,rightMaxHeight=0,left=0,right=n-1;


        while(left<right){


            if(height[left]<=height[right]){

                leftMaxHeight = Math.max(leftMaxHeight,height[left]);

                totalwater+=leftMaxHeight-height[left];

                left++;
            }
            else{

                rightMaxHeight = Math.max(rightMaxHeight,height[right]);

                totalwater+=rightMaxHeight - height[right];

                right--;
            }
        }

        return totalwater;
        
    }
}