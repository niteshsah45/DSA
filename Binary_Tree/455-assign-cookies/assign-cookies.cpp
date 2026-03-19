class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        
        int childGreed = g.size();
        int cookies = s.size();

        int total=0,i=0,j=0;

        while(i<childGreed && j<cookies){

            if(s[j]>=g[i]){
                total++;
                i++;
                j++;
            }
            else if(s[j]<g[i]){
                j++;
            }
            else{
                i++;
            }
        }
        return total;
        
    }
};