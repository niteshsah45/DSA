class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {

        int n = moves.size();

        int furthest=0;

        int lsize=0,rsize=0,space=0;

        for(int i=0;i<n;i++){

            if(moves[i]=='L') lsize++;
            else if(moves[i]=='R') rsize++;
            else space++;
        }
        furthest = abs(lsize-rsize)+space;
      
        return furthest;
        
    }
};