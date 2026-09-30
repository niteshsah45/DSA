class Solution {

    public void generatePer(int[] nums, List<List<Integer>> list, List<Integer> arr,boolean[] vis, int idx){


        if(idx==nums.length){

            list.add(new ArrayList<>(arr));
        }

        for(int i=0;i<nums.length;i++){

            if(!vis[i]){

                arr.add(nums[i]);
                vis[i]=true;

                generatePer(nums,list,arr,vis,idx+1);

                vis[i]=false;
                arr.remove(arr.size()-1);
            }
        }
        
    }
    public List<List<Integer>> permute(int[] nums) {

        List<List<Integer>> list = new ArrayList<>();

        List<Integer> arr = new ArrayList<>();

        boolean[] vis=new boolean[nums.length];

        generatePer(nums,list,arr,vis,0);

        return list;
        
    }
}