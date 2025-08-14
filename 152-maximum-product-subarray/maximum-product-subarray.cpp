class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int prefixpro=1;
        int suffixpro=1;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(prefixpro==0) prefixpro=1;
            if(suffixpro==0) suffixpro=1;
            prefixpro*=nums[i];
            suffixpro*=nums[n-1-i];
            maxi=max(maxi,max(prefixpro,suffixpro));
        }
        return maxi;
        
    }
};