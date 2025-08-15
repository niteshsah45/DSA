class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int> result;
        for(int i=0;i<n;i++){
            int sum=nums[i];
            int targethead=target-sum;
            if(result.find(targethead)!=result.end()){
                return {result[targethead],i};
            }
            result[sum]=i;
        }
        return {-1,-1};
        
    }
};