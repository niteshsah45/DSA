class Solution {
public:
    int countCollisions(string directions) {
        int n = directions.size();
        int start=0,end = n-1;
        int collision =0;
        while(start<n && directions[start]=='L') start++;
        while(end>=0 && directions[end]=='R') end--;

        while(start<=end){
            if(directions[start]!='S'){
                collision++;
            }
            start++;
        }
        return collision;
    }
};