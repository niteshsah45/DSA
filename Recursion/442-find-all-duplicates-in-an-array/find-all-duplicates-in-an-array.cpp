class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int> seen;
        vector<int> duplicates;
        for(auto x:nums){
            if(seen.count(x)) duplicates.push_back(x);
            seen.insert(x);
        }
        return duplicates; 
    }
};