class Solution {
    public int reverseDegree(String s) {

        int totalSum=0;

        int n = s.length();

        int idx=1;

        for(char c:s.toCharArray()){

            int reverse = 'z'-c+1;

            System.out.print(idx+" "+reverse+" ");

            int sum = idx*reverse;

            totalSum+=sum;
            idx++;

        }

        return totalSum;
        
    }
}