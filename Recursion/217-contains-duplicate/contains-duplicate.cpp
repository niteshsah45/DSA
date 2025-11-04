class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> lastSeen;
        for(int i=0;i<nums.size();i++){
            if(lastSeen.count(nums[i])) return true;
            lastSeen[nums[i]];
        }
        return false;
    }
};