class Solution {

    String answer="";
    boolean found=false;

    public void backtrack(String s,String target,boolean[] used,String curr,boolean greater){


        if(found) return;


        if(curr.length()==s.length()){

            if(greater){
                answer=curr;
                found=true;
            }
            return;
        }

        int index=curr.length();

        for(int i=0;i<s.length();i++){


            if(used[i]) continue;

            if(i > 0 && s.charAt(i) == s.charAt(i-1) && !used[i-1]) continue;

            char c = s.charAt(i);

            if(!greater && c<target.charAt(index)) continue;

            used[i]=true;

            backtrack(s,target,used,curr+c,
                greater || c>target.charAt(index)
            );

            used[i]=false;
        }

    }
    public String lexGreaterPermutation(String s, String target) {

        char[] ch = s.toCharArray();

        Arrays.sort(ch);

        s=new String(ch);

        boolean[] used = new boolean[s.length()];


        backtrack(s,target,used,"",false);

        return answer;
        
    }
}