class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> result;
        unordered_map<int,int> mpp;
        for(auto x:nums){
            mpp[x]++;
        }
        for(auto pair:mpp){
            if(pair.second==2){
                result.push_back(pair.first);
            }
        }
        return result; 
    }
};