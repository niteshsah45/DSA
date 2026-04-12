class Solution {
    public int maxArea(int[] height) {

        int water=0;
        int n = height.length;

        int start=0,end=n-1;

        while(start<end){

            int minilength = Math.min(height[start],height[end]);

            int width = end-start;

            water = Math.max(minilength*width,water);
            if(height[start]<height[end]){
                start++;
            }
            else{
                end--;
            }
        }
        return water;
        
    }
}