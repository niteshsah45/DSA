class Solution {
public:
    int binaryGap(int n) {

        string s = bitset<32>(n).to_string();

        s.erase(0,s.find('1'));

        int start=0,end=1;
        int maxi=0;

        while(end<s.size()){

            if(s[end]=='1'){
                maxi= max(maxi,end-start);
                start=end;
            }
            end++;
        }
        return maxi;
        
    }
};