class Solution {
public:
int leastcapacity(vector<int>& nums,int mid){
    int n=nums.size();
    int sumcap=0;
    int count=1;
    for(int i=0;i<n;i++){
        if(sumcap+nums[i]>mid){
            count++;
            sumcap=nums[i];
        }
        else{
            sumcap+=nums[i];
        }
    }
    return count;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            int result= leastcapacity(weights,mid);
            if(result<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};