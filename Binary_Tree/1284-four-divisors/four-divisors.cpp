class Solution {
public:
int countDivisors(int n){
    int count=0,sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){

         count++;
         sum+=i;
        }
        if(count>3) break;
    }
    if(count==3)
    return sum+n;

    else return 0;
}
    int sumFourDivisors(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++){

            total+=countDivisors(nums[i]);
        }
        return total;
    }
};