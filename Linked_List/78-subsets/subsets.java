class Solution {

    public void findSubsets(List<List<Integer>> list, List<Integer> arr,int[] nums, int idx){


        if(idx==nums.length){

            list.add(new ArrayList<>(arr));
            return;
        }

        arr.add(nums[idx]);
        findSubsets(list,arr,nums,idx+1);
        arr.remove(arr.size()-1);
        findSubsets(list,arr,nums,idx+1);


    }
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> list = new ArrayList<>();

        List<Integer> arr = new ArrayList<>();

        findSubsets(list,arr,nums,0);

        return list;
        
    }
}