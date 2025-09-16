class Solution {
public:
bool findMatch(string temp,string &b){
     int tempSize=temp.size();
        int n2=b.size();
        int pre=0,suf=1;
        vector<int> lps(n2,0);
        while(suf<n2){
            if(b[pre]==b[suf]){
                lps[suf]=pre+1;
                pre++;
                suf++;
            }
            else{
                if(pre==0){
                    lps[suf]=0;
                    suf++;
                }
                else{
                    pre=lps[pre-1];
                }
            }
        }
        int first=0,second=0;
        while(first<tempSize && second<n2){
            if(temp[first]==b[second]){
                first++;
                second++;
            }
            else{
                if(second==0){
                    first++;
                }
                else{
                    second=lps[second-1];
                }
            }
        }
        if(second==n2) return true;
        else return false;
}
int repeatedStringMatch(string a, string b) {
        int n1=a.size();
        int n2=b.size();
        if(a==b) return 1;
        int repeat=1;
        string temp=a;
        while(temp.size()<n2){
            temp+=a;
            repeat++;
        } 
        if(findMatch(temp,b)==1) return repeat;
        temp=temp+a;
        if(findMatch(temp,b)==1) return repeat+1;
        else return -1;
    }
};