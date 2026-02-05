class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {

        vector<int> ans;

        int n = nums.size();
        // if(n==1){
        //     ans.push_back(nums[0]);
        //     return ans;
        // }

        for(int i=0;i<n;i++){

            if(nums[i]>0){

                int possum = (i+nums[i])%n;
                
              
                ans.push_back(nums[possum]);
            }

            else{
                int negsum = (nums[i]+i)%n;
                if(negsum<0){
                   negsum = (negsum+n);
                }
                ans.push_back(nums[negsum]);
            }
        }
        return ans;
        
    }
};