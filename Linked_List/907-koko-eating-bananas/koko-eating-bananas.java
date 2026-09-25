class Solution {


    public long findHour(int[] piles, int mid){

        long count=0;

        for(int i=0;i<piles.length;i++){

           int md = piles[i]%mid;

           count+=(long)piles[i]/mid;

           if(md>0) count++;
        }

        return  count;
    }
    public int minEatingSpeed(int[] piles, int h) {


        int n = piles.length;

        int max=0;

        for(int x:piles){

            max = Math.max(x,max);
        }

        int start=1;
        int end=max;

        int ans = Integer.MAX_VALUE;

        while(start<=end){

            int mid = start+(end-start)/2;


            long k = findHour(piles,mid);

            System.out.print(k+" "+mid+" ");

            if(k<=h){

                ans = Math.min(ans,mid);

                end=mid-1;
            }

            else start=mid+1;
        }

        return ans;
        
    }
}