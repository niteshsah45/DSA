class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> dup = nums;
        int n = nums.size();
        sort(dup.begin(),dup.end());
        vector<int> result;

        for(int i=0;i<nums.size();i++){
            auto it = lower_bound(dup.begin(),dup.end(),nums[i]);
            int index=it-dup.begin();
            result.push_back(index);
        }
        return result;
    }
};