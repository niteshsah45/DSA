class Solution {
    public int minAddToMakeValid(String s) {


        int open=0,close=0;

        Stack<Character> stack = new Stack<>();


        for(char c:s.toCharArray()){


            if(stack.isEmpty()){

                stack.push(c);
            }

            else if(!stack.isEmpty() && c==')' && stack.peek()=='('){

                stack.pop();
            }
            else{
                stack.push(c);
            }
            

        }

        return stack.size();
        
    }
}