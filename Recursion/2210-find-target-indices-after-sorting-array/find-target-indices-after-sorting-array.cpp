class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n =nums.size();
        sort(nums.begin(),nums.end());

        auto lower = lower_bound(nums.begin(),nums.end(),target);
        auto upper = upper_bound(nums.begin(),nums.end(),target);

        int first = (lower- nums.begin());
        int last = (upper-nums.begin());
        vector<int> result;
        for(int i=first;i<last ;i++){
            result.push_back(i);
        }
        return result;
        
    }
};