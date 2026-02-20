class Solution {
public:
bool isPrime(int num){

    if(num==1) return false;

    for(int i=2;i<=sqrt(num);i++){

        if(num%i==0) return false;

    }
    return true;
}
    int diagonalPrime(vector<vector<int>>& nums) {

        int maxi=0;

        int n = nums.size();

        int idx1=0;

        for(int i=0;i<n;i++){

             bool check = isPrime(nums[i][idx1]);
             if(check){
                maxi = max(maxi,nums[i][idx1]);
             }
             idx1++;
        }

        int idx2=n-1;

        for(int i=0;i<n;i++){

            bool check=isPrime(nums[i][idx2]);

            if(check){
                maxi = max(maxi,nums[i][idx2]);
            }
            idx2--;
        }

        return maxi;
        
    }
};