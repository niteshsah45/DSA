class Solution {
public:
    int countOdds(int low, int high) {
        long long sum =0;
        if(low%2==0 && high%2==0){
            sum = (high-low)/2;
        }
        else{
            sum = (high-low)/2;
            sum+=1;
        }
        return sum;
    }
};