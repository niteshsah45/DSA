class Solution {
public:
    int maxProduct(vector<int>& nums) {


        int n = nums.size();

        int prefixmul=nums[0],suffixmul=nums[n-1];

       int multi =nums[0];

        if(n==1) return nums[0];

        int end=1;

        while(end<n){

            if(multi==0) multi=1;

            multi *= nums[end];

            prefixmul = max(prefixmul,multi);

           end++;
        }

        end=n-2;
        multi=nums[n-1];

        while(end>=0){

            if(multi==0) multi=1;
            multi*= nums[end];
            suffixmul = max(suffixmul,multi);

            end--;
        }

        return max(suffixmul,prefixmul);
        
    }
};