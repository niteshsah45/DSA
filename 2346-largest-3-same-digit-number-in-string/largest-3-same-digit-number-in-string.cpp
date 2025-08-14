class Solution {
public:
    string largestGoodInteger(string num) {
        string max_good="";
        for(int i=0;i<=(int)num.size()-3;i++){
            if(num[i]==num[i+1]&& num[i+1]==num[i+2]){
                string st=num.substr(i,3);
                if(max_good<st){
                     max_good=st;
                 }
            }
        }
        return max_good;
        
    }
};