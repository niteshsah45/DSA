class Solution {



    public int findSum(int n){

        int total=0;

        while(n>0){
            int digit=n%10;
            total+=digit;
            n=n/10;
        }
        return total;
    }



    public int findProduct(int n){
        int total=1;

        while(n>1){
            int digit = n%10;
            if(digit==0) return 0;
            total*=digit;
            n=n/10;
        }
        return total;
    }
    public boolean checkDivisibility(int n) {

        int pro = findProduct(n);
        int sum = findSum(n);

        System.out.print(pro+" "+sum);
        if(n%(pro+sum)!=0) return false;
        return true;
        
    }
}