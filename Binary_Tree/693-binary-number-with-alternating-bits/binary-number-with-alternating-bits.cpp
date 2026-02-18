class Solution {
public:
    bool hasAlternatingBits(int n) {

        int ori =n;

        string s ="";

        while(n>0){

            int digit = n%2;
            s+=(char)digit+'0';
            n=n/2;
        }
        reverse(s.begin(),s.end());

        for(int i=0;i<s.size()-1;i++){

            if(s[i]==s[i+1]) return false;
        }
        
        return true;
    }
};