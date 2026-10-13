class Solution {

    public long findalterleft(int[] arr, int start, int end){


        long total=0;

        for(int i=start;i<end;i++){

            long cal=arr[i]*arr[i];
            total+=cal;
        }

       // System.out.print(total);
        return total;
    }
    public long findalterright(int[] arr, int end, int start){


        long total=0;

            for(int i=end;i>start;i--){

                long cal = arr[i]*arr[i];
                total+=cal;
            }
            //System.out.print(total);
            return total;
    }
    public long maxAlternatingSum(int[] nums) {

        int n = nums.length;

        for(int i=0;i<n;i++){

            nums[i] = Math.abs(nums[i]);

            System.out.print(nums[i]);
        }

        Arrays.sort(nums);

        if(n%2==0){

            return findalterright(nums,n-1,n/2-1)-findalterleft(nums,0,n/2);
        }

        return findalterright(nums,n-1,n/2-1)-findalterleft(nums,0,n/2);
        
    }
}