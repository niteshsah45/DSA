class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prefixsumcount;
        int count=0;
        int sum=0;
        prefixsumcount[0]=1;
        for(auto num:nums){
            sum+=num;
            if(prefixsumcount.find(sum-k)!= prefixsumcount.end()){
               count+= prefixsumcount[sum-k];
            }
            prefixsumcount[sum]++;
        }
        return count;
        
    }
};