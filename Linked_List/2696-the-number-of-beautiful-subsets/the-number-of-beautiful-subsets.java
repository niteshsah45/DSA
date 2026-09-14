class Solution {

    int count=0;

    public boolean beautiful(List<Integer> list,int k){

        HashSet<Integer> st = new HashSet<>();

        if(list.size()<1) return false;

        int sum=0;

        for(int num:list){

            if(st.contains(num-k) || st.contains(num+k)){

                return false;
            }
            st.add(num);
        }

        return true;
    }

    public void checkSubsets(int[] nums, int k, List<Integer> list,int idx){

        if(idx==nums.length){

            if(list.size()==1 || beautiful(list,k)){
                count++;
            }
            return;
        }

        list.add(nums[idx]);
        checkSubsets(nums,k,list,idx+1);
        list.remove(list.size()-1);
        checkSubsets(nums,k,list,idx+1);
    }

    public int beautifulSubsets(int[] nums, int k) {

        Arrays.sort(nums);


        List<Integer> list = new ArrayList<>();
        checkSubsets(nums,k,list,0);

        return count;
        
    }
}