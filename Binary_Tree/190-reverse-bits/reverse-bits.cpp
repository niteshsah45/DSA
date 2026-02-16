class Solution {
public:
    int reverseBits(int n) {

        int ori=n;

        string s="";

        while(ori>0){

            int modu = ori%2;
            s+=modu+'0';
            ori=ori/2;
        }

        int size = s.size();
        cout<<size;

        for(int i=1;i<=32-size;i++){
            s+='0';
        }

        long long pow=1;

        long long total=0;

        cout<<s;

        for(int i=s.size()-1;i>=0;i--){

            if(s[i]=='1'){

                total+=pow;
            }
            pow=pow*2;
        }

        return total;
        
    }
};