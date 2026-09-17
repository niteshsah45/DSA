class Solution {
    public int minSumOfLengths(int[] arr, int target) {

        int n = arr.length;

        HashMap<Integer,Integer> map = new HashMap<>();

        map.put(0,-1);

        int ans =Integer.MAX_VALUE;

        int[] minlen = new int[n];

        Arrays.fill(minlen,Integer.MAX_VALUE);

        int currentbest=Integer.MAX_VALUE;

        int sum=0;

        for(int i=0;i<n;i++){

            sum+=arr[i];

            int needed = sum-target;

            if(map.containsKey(needed)){

                int start = map.get(needed);

                int len = i-start;

                if(start>=0 && minlen[start]!=Integer.MAX_VALUE){

                        ans = Math.min(ans,len+minlen[start]);
                }

                currentbest = Math.min(currentbest,len);
            }
            

            minlen[i]=currentbest;

            map.put(sum,i);
        }
        return ans==Integer.MAX_VALUE?-1: ans;
        
    }
}