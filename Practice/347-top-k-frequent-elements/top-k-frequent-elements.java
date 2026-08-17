class Solution {


    class Pair{

        int value,freq;

        Pair(int value,int freq){

            this.value=value;
            this.freq=freq;
        }
    }
    public int[] topKFrequent(int[] nums, int k) {


        PriorityQueue<Pair> pq = new PriorityQueue<>(
            (a,b)->{

                return Integer.compare(b.freq,a.freq);
            }
        );

        HashMap<Integer,Integer> mp = new HashMap<>();

        for(int x:nums){

            mp.put(x,mp.getOrDefault(x,0)+1);

        }

        for(Map.Entry<Integer,Integer> entry : mp.entrySet()){

            pq.add(new Pair(entry.getKey(),entry.getValue()));
        }

        int[] ans = new int[k];

        for(int i=0;i<k;i++){

            Pair node = pq.poll();

            ans[i] = node.value;
        }

        return ans;
        
    }
}