class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int n=nums.size();
        if(n%2!=0) return false;
        map<int,int> result;
        for(auto x:nums){
            result[x]++;
        }
        for(int i=0;i<result.size();i++){
            if(result[i]>2){
                return false;
            }
        }
        return true;
    }
};