class Solution {
public:
    int countOdds(int low, int high) {
        int count =0;
        if(low%2==0) low++;
        for(int i =low;i<=high;){
            count++;  
            i+=2;
        }
        return count;
    }
};