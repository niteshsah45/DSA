
class Solution {

    public boolean palin(String s, int start,int end){

        if(Math.abs(end-start)==0) return true;

        while(start<=end){

            if(s.charAt(start)!=s.charAt(end)) return false;

            start++;
            end--;
        }
        return true;
    }


    public void findString(String s,List<List<String>> ans, List<String> list, int idx){

        if(idx==s.length()){

            ans.add(new ArrayList<>(list));
            return;
        }

        for(int i=idx;i<s.length();i++){


            if(palin(s,idx,i)){

                list.add(s.substring(idx,i+1));

                findString(s,ans,list,i+1);

                list.remove(list.size()-1);
            }
        }
    }
    public List<List<String>> partition(String s) {


         List<List<String>> ans = new ArrayList<>();

         List<String> list = new ArrayList<>();


         findString(s,ans,list,0);

         return ans;
        
    }
}