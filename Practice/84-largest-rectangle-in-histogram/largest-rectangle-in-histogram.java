class Solution {
    public int largestRectangleArea(int[] heights) {

        Stack<Integer> stack = new Stack<>();

        int n = heights.length;

        int[] ans = new int[n+1];

        int maxi=0;

        for(int i=0;i<n;i++){

            ans[i]=heights[i];
        }
        ans[n]=0;


        for(int i=0;i<ans.length;i++){


            int width=0,height=0;

            while(!stack.isEmpty() && ans[stack.peek()]>ans[i]){

                height = ans[stack.pop()];
            
                if(stack.isEmpty()){
                    width=i;
                }
                else{

                    width = i-stack.peek()-1;
                }

                maxi = Math.max(maxi,height*width);
            }
            stack.push(i);
        }
        return maxi;
    }
}