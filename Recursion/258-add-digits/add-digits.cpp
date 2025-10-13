class Solution {
public:
int sumAdd(int num){
    int sum=0;
    while(num>0){
        int digit=num%10;
        sum = digit+sum;
        num/=10;

    }
    return sum;
}
    int addDigits(int num) {
       while(num>9){
        num = sumAdd(num);
       }
        return num;
    }
};