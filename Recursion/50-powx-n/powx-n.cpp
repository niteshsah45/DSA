class Solution {
public:
    double myPow(double x, int n) {
        int ori=n;
        double ans = 1.0;
        long long nn=n;
        if(n<0){
            nn =n;
            nn= -1*nn;
        }
        while(nn>0){
            if(nn%2){ 
                ans= ans* x;
                nn-=1;
            }
            else{
                x=x*x;
                nn/=2;
            }
        }
        if(ori<0) return 1.0/ans;
        return ans;
    }
};