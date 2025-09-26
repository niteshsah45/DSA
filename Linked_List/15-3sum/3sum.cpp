class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        long long sum=0;
        vector<vector<int>> result;
        int i=0;
        for(int i=0;i<n;i++){
             if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
            if(nums[i]>0) break;
            long long sum= (long long)nums[i]+nums[j]+nums[k];
            if(sum==0){
                result.push_back({nums[i],nums[j],nums[k]});
                j++;
                k--;
                while(j<k && nums[j]==nums[j-1]) j++;
                while(j<k && nums[k]==nums[k+1]) k--;
            }
            else if(sum<0){
                j++;
            }
            else{
                k--;
            }
            }
        }
        return result;
    }
};