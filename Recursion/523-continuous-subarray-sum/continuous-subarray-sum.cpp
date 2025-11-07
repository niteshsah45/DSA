class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;
        mp[0]=-1;
        long long prefix=0;
        for(int i=0;i<nums.size();i++){
            prefix+=nums[i];
            int mod = prefix%k;
            if(mp.count(mod)){
                if(i-mp[mod]>=2){
                    return true;
                }
            }
            else{
                mp[mod]=i;
            }
        }
        return false;
    }
};