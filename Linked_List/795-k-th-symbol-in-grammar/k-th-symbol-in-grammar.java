class Solution {


    public int solveRecursion(int n,int k){

        if(n==1) return 0;

        int totalEle = (int) Math.pow(2,(n-1));
        int mid = totalEle/2;


        if(k>mid){

            return 1-solveRecursion(n,k-mid);
        }
        else{
            return solveRecursion(n-1,k);
        }
    }
    public int kthGrammar(int n, int k) {

        return solveRecursion(n,k);
        
    }
}