class Solution {


    class Edge{

        int to;
        int weight;

        Edge(int to,int weight){

            this.to=to;
            this.weight=weight;
        }
    }

    class Node{

        int city;
        int distance;

        Node(int city,int distance){

            this.city=city;
            this.distance=distance;
        }
    }
    public int networkDelayTime(int[][] times, int n, int k) {
        
        List<List<Edge>> list = new ArrayList<>();

        for(int i=0;i<=n;i++){

            list.add(new ArrayList<>());
        }

        for(int[] time:times){

            int from = time[0];
            int to = time[1];
            int weight = time[2];

            list.get(from).add(new Edge(to,weight));
        }

        int[] dist = new int[n+1];

        Arrays.fill(dist,Integer.MAX_VALUE);

        dist[k]=0;

        PriorityQueue<Node> pq = new PriorityQueue<>(
            (a,b) -> Integer.compare(a.distance,b.distance)
        );

        pq.add(new Node(k,0));


        while(!pq.isEmpty()){

            Node curr = pq.poll();

            int city = curr.city;
            int currentdistance = curr.distance;

            if(currentdistance>dist[city]) continue;

            for(Edge edge : list.get(city)){

                int nextcity = edge.to;
                int newdis = currentdistance+edge.weight;

                if(newdis<dist[nextcity]){

                    dist[nextcity] = newdis;

                    pq.add(new Node(nextcity,newdis));
                }
            }
        }

         int ans=0;

            for(int i=1;i<=n;i++){

                if(dist[i]==Integer.MAX_VALUE) return -1;

                ans = Math.max(ans,dist[i]);
            }

        return ans;

    }
}