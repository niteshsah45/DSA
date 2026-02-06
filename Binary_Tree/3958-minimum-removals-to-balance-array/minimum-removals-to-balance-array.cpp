class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {


        sort(nums.begin(),nums.end());

        int i=0;

        int n = nums.size();

        int keep=1;

        for(int j=0;j<n;j++){

            while((long long)nums[j] > (long long)nums[i]*k){
                i++;
            }

            keep = max(keep,j-i+1);
        }

        return n-keep;
        
    }
};