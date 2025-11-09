class Solution {
public:
int countSubarrayK(vector<int>& nums,int k){
     int start=0,end=0;
        int count=0;
        unordered_map<int,int> freq;
        while(end<nums.size()){
            freq[nums[end]]++;

            while(freq.size()>k){
                freq[nums[start]]--;
                if(freq[nums[start]]==0){
                    freq.erase(nums[start]);
                }
                start++;
            }
            count+=end-start+1;
            end++;
        }
        return count;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return countSubarrayK(nums,k)- countSubarrayK(nums,k-1); 
    }
};