class Solution {
public:
bool checkThreshold(vector<int> &nums,int mid,int threshold){
    int sum=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        sum+=ceil((double)nums[i]/mid);
    }
    if(sum<=threshold){
        return true;
    }
    else return false;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            bool result= checkThreshold(nums,mid,threshold);
            if(result){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};