class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        for(int i=1;i<=n;i++){
            sum+=i;
        }
        long long result = accumulate(nums.begin(),nums.end(),0);
        return sum-result;   
    }
};