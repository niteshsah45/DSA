class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {


        sort(nums.begin(),nums.end());

        int n = nums.size();

        long long ans = (long long) nums[0]+nums[1]+nums[2];


        for(int i=0;i<n-2;i++){

            int j=i+1;
            int k=n-1;

            while(j<k){

                long long sum = (long long) nums[i]+nums[j]+nums[k];

                long long diff = llabs(sum-(long long)target);
                long long bestdiff = llabs(ans-(long long)target);

                if(diff<bestdiff){

                    ans = sum;

                }

                if(sum>target){

                    k--;
                }
                else if(sum<target){
                    j++;
                }
                else{
                    return target;
                }

            }

        }
        return ans;

        
        
    }
};