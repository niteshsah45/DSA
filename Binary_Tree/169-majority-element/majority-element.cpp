class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();
        int majo = n/2;
        unordered_map<int,int> freq;

        for(auto x:nums){
            
            freq[x]++;
        }
        for(int i=0;i<n;i++){
            if(freq[nums[i]]>majo) return nums[i];
        }
        return -1;
    }
};