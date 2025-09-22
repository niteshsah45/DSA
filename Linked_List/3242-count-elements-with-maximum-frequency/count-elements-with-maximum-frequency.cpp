class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> result;
        for(auto x:nums){
            result[x]++;
        }
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(result[nums[i]]>maxi){
                maxi=result[nums[i]];
            }
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(result[nums[i]]==maxi){
                ans+=maxi;
                result[nums[i]]=0;
            }
        }
        return ans;
    }
};