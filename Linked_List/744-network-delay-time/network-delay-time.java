class Solution {
    public int networkDelayTime(int[][] times, int n, int k) {

        ArrayList<ArrayList<int[]>> adj = new ArrayList<>();

        for(int i=0;i<=n;i++){
            adj.add(new ArrayList<>());
        }

        for(int[] time:times){

            int u = time[0];
            int v = time[1];
            int w = time[2];

            adj.get(u).add(new int[]{v,w});
        }

        PriorityQueue<int[]> pq = new PriorityQueue<>(
            (a,b) -> Integer.compare(a[1],b[1])
        );

        int[] dist = new int[n+1];

        Arrays.fill(dist,Integer.MAX_VALUE);
        dist[k] =0;


        pq.offer(new int[]{k,0});


        while(!pq.isEmpty()){

            int[] curr = pq.poll();

            int node = curr[0];
            int distance = curr[1];

            if(dist[node]!=distance) continue;


            for(int[] neg:adj.get(node)){

                int negnode = neg[0];
                int negdis = neg[1];


                if(dist[node]+negdis<dist[negnode]){

                    dist[negnode] = dist[node]+negdis;

                    pq.offer(new int[]{negnode,dist[negnode]});
                }
            }
        }

        int mini = Integer.MIN_VALUE;

        for(int i=1;i<=n;i++){
            
            if(dist[i]==Integer.MAX_VALUE) return -1;

            mini = Math.max(dist[i],mini);
        }

        return mini;

        
    }
}