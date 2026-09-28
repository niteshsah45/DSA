class Solution {
    public int maxDepth(String s) {


        Stack<Character> stack = new Stack<>();

        int maxi=0;

        int count=0;

        for(int i=0;i<s.length();i++){

            char c = s.charAt(i);

            if(c=='('){
                count++;
            }

            else if(c==')'){

                count--;
            }

            maxi = Math.max(maxi,count);
        }

        return maxi;
        
    }
}