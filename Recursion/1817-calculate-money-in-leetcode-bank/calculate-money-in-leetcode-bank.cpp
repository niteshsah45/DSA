class Solution {
public:
    int totalMoney(int n) {
        int totalMoney=0;
        int days=1;
        int round=1;
        for(int i=1;i<=n;i++){
            if(i%7==0){
                totalMoney+=days;
                days=round+1;
                round++;
            }
            else{
            totalMoney+=days;
            days++;
            }
        }
        return totalMoney; 
    }
};