class Solution {
    public int largestRectangleArea(int[] heights) {


        int n = heights.length;

        int[] result = new int[n+1];

        result[n]=0;

        for(int i=0;i<n;i++){

            result[i] = heights[i];
        }


        Stack<Integer> stack = new Stack<>();

        int maxi =0;


        for(int i=0;i<n+1;i++){


            while(!stack.isEmpty() && result[i]<result[stack.peek()]){

                int he = result[stack.pop()];

                int width = 1;


                if(stack.isEmpty()){

                    width = i;
                    
                }
                else width = i-stack.peek()-1;

                maxi = Math.max(maxi,width*he);

            }

            stack.push(i);
        }

        return maxi;  
    }
}