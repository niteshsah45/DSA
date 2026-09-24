class Solution {
    public int[] dailyTemperatures(int[] temp) {


        int n = temp.length;

        int[] result = new int[n];

        Stack<Integer> stack = new Stack();


        for(int i=n-1;i>=0;i--){


            while(!stack.isEmpty() && temp[i]>=temp[stack.peek()]){
                stack.pop();
            }

            if(stack.isEmpty()){

                result[i] = 0;
            }

            else result[i] = stack.peek()-i;
            stack.push(i);
        }
        return result;
        
    }
}