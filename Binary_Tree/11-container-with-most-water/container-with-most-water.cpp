class Solution {
public:
    int maxArea(vector<int>& height) {

        int maxArea = 0, start =0,end = height.size()-1;

        while(start<end){

            int mini = min(height[start],height[end]);

            maxArea = max(maxArea,mini*(end-start));

            if(height[start]<height[end]){
                start++;
            }
            else{
                end--;
            }
        }
        return maxArea;
        
    }
};