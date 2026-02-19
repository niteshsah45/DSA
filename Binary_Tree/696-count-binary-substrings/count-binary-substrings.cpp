class Solution {
public:
    int countBinarySubstrings(string s) {

        int previous=0,current=1,ans=0;

        for(int i=1;i<s.size();i++){

                if(s[i]==s[i-1]){
                    current++;
                }
                else{
                    ans+=min(previous,current);
                    previous=current;
                    current=1;
                }
        }
        ans+=min(previous,current);
        return ans;
    }
};