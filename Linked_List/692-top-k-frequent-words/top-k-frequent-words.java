class Solution {
    public List<String> topKFrequent(String[] words, int k) {


        //Arrays.sort(words);


        HashMap<String,Integer> map = new HashMap<>();


        for(String s:words){

            map.put(s,map.getOrDefault(s,0)+1);
        }


        PriorityQueue<String> pq = new PriorityQueue<>((a,b)->{
            int freqcount =  Integer.compare(map.get(b),map.get(a));

            if(freqcount!=0) return freqcount;

            return a.compareTo(b);

    });


        List<String> ans = new ArrayList<>();


        for(Map.Entry<String,Integer> entry:map.entrySet()){


            pq.add(entry.getKey());
        }

        for(int i=0;i<k;i++){

            ans.add(pq.poll());
        }

        //Collections.sort(ans);

        return ans;
        
    }
}