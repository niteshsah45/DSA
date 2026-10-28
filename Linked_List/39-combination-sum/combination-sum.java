class Solution {

    public void findsubsets(int[] candidates, int target,List<List<Integer>> ans, List<Integer> result,int idx){


        if(target==0){

            ans.add(new ArrayList<>(result));

            return;
        }
        if(idx==candidates.length) return;

        if(candidates[idx]<=target){


            result.add(candidates[idx]);
            findsubsets(candidates,target-candidates[idx],ans,result,idx);

            result.remove(result.size()-1);

            findsubsets(candidates,target,ans,result,idx+1);
        }
    }
    public List<List<Integer>> combinationSum(int[] candidates, int target) {


            Arrays.sort(candidates);
        List<List<Integer>> ans = new ArrayList<>();

        List<Integer> result = new ArrayList<>();

        findsubsets(candidates,target,ans,result,0);

        return ans;
        
    }
}