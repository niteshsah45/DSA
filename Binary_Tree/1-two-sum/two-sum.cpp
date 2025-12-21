class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int,int> store;
        
        for(int i=0;i<nums.size();i++){
            int targethead = target-nums[i];

            if(store.find(targethead)!=store.end()){
                return {store[targethead],i};
            }
            store[nums[i]]=i;
        }
        return {0,0};  
    }
};