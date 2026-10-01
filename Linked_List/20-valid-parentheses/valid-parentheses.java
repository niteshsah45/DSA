class Solution {
    public boolean isValid(String s) {


        Stack<Character> stack = new Stack<>();



        int n = s.length();

        if(n==1) return false;


        for(char c:s.toCharArray()){

            if(c=='(' || c=='{' || c=='['){

                stack.push(c);
                continue;
            }

            else if(!stack.isEmpty() && c==')' && stack.peek()=='('){

                    stack.pop();


            }

            else if(!stack.isEmpty() && c=='}' && stack.peek()=='{'){

                    stack.pop();


            }
            else if(!stack.isEmpty() && c==']' && stack.peek()=='['){

                    stack.pop();


            }
            else return false;
        }

        if(stack.size()>0) return false;

        return true;
        
    }
}