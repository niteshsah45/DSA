class Solution {


    class Edge{

        int to;
        double weight;

        Edge(int to,double weight){

            this.to=to;
            this.weight=weight;
        }
    }

    class Node{

        int nd;
        double score;

        Node(int nd,double score){

            this.nd=nd;
            this.score=score;
        }
    }
    public double maxProbability(int n, int[][] edges, double[] succProb, int start_node, int end_node) {


            List<List<Edge>> list = new ArrayList<>();

            for(int i=0;i<n;i++){

                list.add(new ArrayList<>());
            }

            int probIndex=0;

            for(int[] edge:edges){

                int st=edge[0];
                int en=edge[1];

                list.get(st).add(new Edge(en,succProb[probIndex]));
                list.get(en).add(new Edge(st,succProb[probIndex++]));
            }

            PriorityQueue<Node> pq = new PriorityQueue<>(
                (a,b) -> Double.compare(b.score,a.score)
            );

            double[] dist = new double[n];

            Arrays.fill(dist,0.0);
            dist[start_node] = 1.0;

            pq.add(new Node(start_node,1.0));


            while(!pq.isEmpty()){

                Node curr = pq.poll();

                int cnode = curr.nd;
                double cscore = curr.score;

                if(cscore<dist[cnode]) continue;

                for(Edge edge : list.get(cnode)){

                    int nextnode = edge.to;
                    double nextscore = edge.weight*cscore;

                    if(nextscore>dist[nextnode]){

                        dist[nextnode] = nextscore;

                        pq.add(new Node(nextnode,nextscore));
                    }
                }
            }

           return dist[end_node];

    }
}