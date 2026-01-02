class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int size = nums.size()/2;
        unordered_map<int,int> mpp;
        for(auto & x:nums){
            mpp[x]++;
        }

        for(auto& x:nums){
            if(mpp[x]==size) return x;
        }
        return 0;
    }
};