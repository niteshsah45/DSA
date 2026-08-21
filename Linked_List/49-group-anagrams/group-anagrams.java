class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {

        HashMap<String,List<String>> map = new HashMap<>();

        for(String s:strs){

            char[] word = s.toCharArray();

            Arrays.sort(word);

            String k = new String(word);

            map.putIfAbsent(k, new ArrayList<String>());

            map.get(k).add(s);
        }
        return  new ArrayList<>(map.values());
    }
}