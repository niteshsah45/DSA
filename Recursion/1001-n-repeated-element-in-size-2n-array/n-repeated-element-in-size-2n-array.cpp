class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2;
        int ans=0;
        unordered_map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==n) {
                ans=nums[i];
                break;
            }
        }
        return ans;
    }
};