class Solution {
public:
int splitarray(vector<int>& nums, int mid){
    int n=nums.size();
    int kpart=1;
    int sumpart=0;
    for(int i=0;i<n;i++){
        if(sumpart+nums[i]<=mid){
            sumpart+=nums[i];
        }
        else{
            kpart++;
            sumpart=nums[i];
        }
    }
    return kpart;
}
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            int result= splitarray(nums,mid);
            if(result<=k){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};