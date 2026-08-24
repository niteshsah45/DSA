class Solution {
    public int evalRPN(String[] tokens) {


        Stack<Integer> stack = new Stack<Integer>();

        for(String c:tokens){

            if(c.equals("+") || c.equals("-") || c.equals("*") || c.equals("/")){


                int op1 = stack.pop();
                int op2 = stack.pop();

                switch(c){

                    case "+": stack.push(op2+op1);break;
                    case "-":stack.push(op2-op1);break;
                    case "*": stack.push(op2*op1);break;
                    case "/" : stack.push(op2/op1);break;
                }
            }
            else{

                stack.push(Integer.parseInt(c));
            }
        }

        return stack.pop();
        
    }
}