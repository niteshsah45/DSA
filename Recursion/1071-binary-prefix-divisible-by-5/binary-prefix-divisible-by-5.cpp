class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int mod=0;
        vector<bool> result;
        for(auto bit:nums){
            mod = (mod*2+bit)%5;
            result.push_back(mod==0);
        }
        return result;
    }
};