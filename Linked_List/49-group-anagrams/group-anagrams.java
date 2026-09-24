class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {

        
        HashMap<String,List<String>> map = new HashMap<>();

        for(String word:strs){

            char[] words = word.toCharArray();

            Arrays.sort(words);

            String key = new String(words);

            map.putIfAbsent(key,new ArrayList<String>());

            map.get(key).add(word);
        }

        List<List<String>> list = new ArrayList<>();

        for(Map.Entry<String,List<String>> entry: map.entrySet()){

            list.add(entry.getValue());
        }

        return list;
        
    }
}