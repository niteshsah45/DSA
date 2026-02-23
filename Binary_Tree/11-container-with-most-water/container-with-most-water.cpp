class Solution {
public:
    int maxArea(vector<int>& height) {

        int n = height.size();
        int start=0,end=n-1;
        int maxiwater=0;

        while(start<end){

            int mini = min(height[start],height[end]);
            maxiwater = max(maxiwater,mini*(end-start));

            if(height[start]<height[end]){
                start++;
            }
            else{
                end--;
            }
        }
        return maxiwater;
    }
};