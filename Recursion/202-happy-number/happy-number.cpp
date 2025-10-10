class Solution {
public:
int calSqrt(int n){
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum+=digit*digit;
        n/=10;
    }
    return sum;
}
bool helper(int n,vector<int>& seen){
    if(n==1) return true;
    if(find(seen.begin(),seen.end(),n)!=seen.end()) return false;
    seen.push_back(n);
    int result=calSqrt(n);
    return helper(result,seen);
}
    bool isHappy(int n) {
        vector<int> seen;
        return helper(n,seen);
    }
};