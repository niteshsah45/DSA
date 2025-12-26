class Solution {
public:
    int bestClosingTime(string customers) {
        int penalty=0;
        int ans =0;
        for(auto& c:customers){
            if(c=='Y'){
                penalty++;
            }
        }
        int minipenalty = penalty;
        for(int i=0;i<customers.size();i++){
            if(customers[i]=='Y'){
                penalty--;
            }
            else{
                penalty++;
            }
            if(penalty<minipenalty){
                minipenalty=penalty;
                ans = i+1;
            }
        }
        return ans;
    }
};