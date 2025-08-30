class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
        if(n1>n2) return false;
        vector<int> freq1(26,0), freq2(26,0);
        for(int i=0;i<n1;i++){ //counting the frequency of the substring;
            freq1[s1[i]-'a']++;
        }
        for(int i=0;i<n1;i++){
            freq2[s2[i]-'a']++;
        }
        if(freq1==freq2) return true;
        for(int i=n1;i<n2;i++){
            freq2[s2[i]-'a']++; //adding new char
            freq2[s2[i-n1]-'a']--; //deleting old char
             if(freq1==freq2) return true;
        }
        return false;

    }
};