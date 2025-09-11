class Solution {
public:
    string sortVowels(string s) {
        string storeVowelC="";
        string storeVowelL="";
        string temp=s;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                {
                    	storeVowelC+=s[i];
                        s[i]='#';
             }
            else if(s[i]=='a'|| s[i]=='e'||s[i]=='i'|| s[i]=='o'||s[i]=='u'){
                storeVowelL+=s[i];
                s[i]='#';
             }
        }
        if(storeVowelC.empty() && storeVowelL.empty()) return temp;
        sort(storeVowelC.begin(),storeVowelC.end());
        sort(storeVowelL.begin(),storeVowelL.end());
        string result="";
        result+=storeVowelC;
        result+=storeVowelL;
        int n1=result.size();
        int j=0;
        for(int i=0;i<n|| j<n1;i++){
            if(s[i]=='#'){
                s[i]=result[j];
                j++;
            }
        }
        return s;
        
    }
};