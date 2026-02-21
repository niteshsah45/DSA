class Solution {
public:
bool isPrime(int num){

    if(num<=1) return false;

    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0) return false;
    }
    return true;
}
    int countPrimeSetBits(int left, int right) {

        int total=0;

        for(int i=left;i<=right;i++){

            int ones=0;
            int i1=i;
            while(i1>0){

                int digit=i1%2;
                if(digit==1) ones++;
                i1=i1/2;
            }
            bool check=false;
            if(ones==2 || ones%2!=0){ 
                 check = isPrime(ones);
            }
            if(check) total++;

        }
        return total;
        
    }
};