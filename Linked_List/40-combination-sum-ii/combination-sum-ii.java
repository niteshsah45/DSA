class Solution {

    public void findsubsets(int[] candidates, int target, List<List<Integer>> ans, List<Integer> result, int idx){


        if(target==0){

            ans.add(new ArrayList<>(result));
            return;
        }

        //if(idx==candidates.length) return;


        for(int i=idx;i<candidates.length;i++){

                if(i>idx && candidates[i]==candidates[i-1])  continue;

                if(candidates[i]>target) break;

                if(candidates[i]<=target){

                    result.add(candidates[i]);
                    findsubsets(candidates,target-candidates[i],ans,result,i+1);
                    result.remove(result.size()-1);
                }
        }
    }
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {


        Arrays.sort(candidates);

        List<List<Integer>> ans = new ArrayList<>();

        List<Integer> result = new ArrayList<>();

        findsubsets(candidates,target,ans,result,0);

        return new ArrayList<>(ans);
        
    }
}