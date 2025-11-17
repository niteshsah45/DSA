class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int startPos=0;
        bool first = false;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1 && first){
                if(i-startPos-1<k) return false;
                else{
                    startPos = i;
                }
            }
            else {
                if(nums[i]==1){
                    startPos = i;
                    first=true;
                }
            }
        }
        return true;
    }
};