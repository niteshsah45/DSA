class Solution {


   class Pair{

        int value,index;

        Pair(int value,int index){
            this.value=value;
            this.index=index;
        }

    }
    public int[] getFinalState(int[] nums, int k, int multiplier) {

        PriorityQueue<Pair> heap = new PriorityQueue<>(
            (a,b)->{

            if(a.value!=b.value){

                return Integer.compare(a.value,b.value);
            }

            return Integer.compare(a.index,b.index);
     } );

        for(int i=0;i<nums.length;i++){

            heap.offer(new Pair(nums[i],i));
        } 

        for(int i=0;i<k;i++){

            Pair node = heap.poll();

            node.value*=multiplier;

            heap.offer(node);
        }    

        while(!heap.isEmpty())   {

            Pair node = heap.poll();

            nums[node.index] = node.value;
        }

        return nums;



    }
}