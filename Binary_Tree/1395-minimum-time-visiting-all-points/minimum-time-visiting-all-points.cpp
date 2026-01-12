class Solution {
public:
int findval(vector<int>& first, vector<int>& second){

    int f=0,s=0;
    
    
    f = abs(first[0]-second[0]);
    s = abs(first[1]-second[1]);
    return max(f,s);
}
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {

        int n = points.size();
        int m =points[0].size();
        int total =0;
        for(int i=0;i<n-1;i++){
            int ans = findval(points[i],points[i+1]);
            total+=ans;
        }
        return total;
        
    }
};