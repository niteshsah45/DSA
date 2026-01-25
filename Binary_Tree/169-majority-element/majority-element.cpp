class Solution {
public:
    int majorityElement(vector<int>& nums) {


        int n = nums.size();
        int majo = n/2;

        int candidate = nums[0];
        int count =1;
        for(int i=1;i<n;i++){

            if(count<=0){
                candidate = nums[i];
                count++;
            }
            else if(nums[i]==candidate){
                count++;
            }
            else if(nums[i]!=candidate){
                count--;
            }
        }
        return candidate;
        
    }
};