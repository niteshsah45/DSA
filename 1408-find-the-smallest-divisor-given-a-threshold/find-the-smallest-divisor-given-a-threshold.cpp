class Solution {
public:
int smallestdivisor(vector<int>& nums, int div){
    int last=0;
    for(int i=0;i<nums.size();i++){
        last+=ceil((double)nums[i]/div);
    }
    return last;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int store=-1;
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            int result = smallestdivisor(nums,mid);
            if(result<=threshold){
                store=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return store;   
    }
};