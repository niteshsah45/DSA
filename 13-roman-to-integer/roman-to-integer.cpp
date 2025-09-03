class Solution {
public:
int convertNum(char c){
    if(c=='I')      return 1;
    else if(c=='V') return 5;
    else if(c=='X') return 10;
    else if(c=='L') return 50;
    else if(c=='C') return 100;
    else if(c=='D') return 500;
    else return 1000;
}
    int romanToInt(string s) {
        int sum=0,index=0;
        int n=s.size()-1;
        while(index<n){
            if(convertNum(s[index])<convertNum(s[index+1])){
                sum-=convertNum(s[index]);
            }
            else{
                sum+=convertNum(s[index]);
            }
            index++;
        }        
        sum+=convertNum(s[index]);
        return sum;
    }
};