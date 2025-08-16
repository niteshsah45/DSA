class Solution {
public:
int upperb(vector<int> &nums,int low,int high,int target){
    int first=nums.size();
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]>target){
             first=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
       
            
        }
    }
    return first;
}
int lowerb(vector<int> &nums,int low,int high,int target){
     int second=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]>=target) {
            second=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return second;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        vector<int> result;
        int firsst=lowerb(nums,low,high,target);
        int lasst=upperb(nums,low,high,target)-1;
        if(firsst==-1 || nums[firsst]!=target){
            result.push_back(-1);
        }
        else{
            result.push_back(firsst);
        }
        if(lasst==-1 || nums[lasst]!=target){
            result.push_back(-1);
        }
        else{
            result.push_back(lasst);
        }
        return result;
    }
};