class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size=nums.size();
        vector<int> result;
        for(auto x:nums){
            if(x!=0){
                result.push_back(x);
            }
        }
        for(auto x:nums){
            if(x==0){
                result.push_back(x);
            }
        }
        for(int i=0;i<size;i++){
            nums[i]=result[i];
        }
        
    }
};