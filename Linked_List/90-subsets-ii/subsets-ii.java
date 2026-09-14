class Solution {


    public void findSet(int[] nums,HashSet<List<Integer>> list, List<Integer> arr, int idx){


        if(idx==nums.length){

            list.add(new ArrayList<Integer>(arr));
            return;
        }

        arr.add(nums[idx]);
        findSet(nums,list,arr,idx+1);
        arr.remove(arr.size()-1);
        findSet(nums,list,arr,idx+1);
    }
    public List<List<Integer>> subsetsWithDup(int[] nums) {

        Arrays.sort(nums);


        HashSet<List<Integer>> list = new HashSet<>();


        List<Integer> arr = new ArrayList<>();

        findSet(nums,list,arr,0);

        List<List<Integer>> ans = new ArrayList<>(list);

        return ans;
        
    }
}