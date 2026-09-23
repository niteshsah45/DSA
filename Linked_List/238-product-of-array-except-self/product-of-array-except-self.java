class Solution {
    public int[] productExceptSelf(int[] nums) {


        int product =1;
        int negnumber =0;

        boolean zero=false;

        int zeronumber=0;




        for(int x:nums){

            if(x==0){
                zeronumber++;
                zero=true;
            }

           if(x!=0) product*=x;

           if(x<0) negnumber++;
        }

        if(zeronumber>1) {
            Arrays.fill(nums,0);
             return nums;
        }

        for(int i=0;i<nums.length;i++){


            if(zero && nums[i]!=0){
                nums[i] = 0;
                continue;
            }

            if(nums[i]<0){

                
                    nums[i] = product/nums[i];
                continue;
            }

            if(nums[i]==0){

                 nums[i] = product;
                 continue;

            }
            else nums[i] = product/nums[i];
        }


        return nums;
        
    }
}