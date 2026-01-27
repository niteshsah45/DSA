class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {


        int total =0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int gstart =0,sstart=0;

        while(gstart<g.size() && sstart<s.size()){
            if(s[sstart]>=g[gstart]){
                total++;
                sstart++;
                gstart++;
            }
            else if(s[sstart]<g[gstart]){
                sstart++;
            }
        }
        return total;
    }
};