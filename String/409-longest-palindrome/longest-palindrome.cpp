class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        vector<int> freq1(26,0),freq2(26,0);
        for(int i=0;i<n;i++){
            if(s[i]>='a'){
                freq1[s[i]-'a']++;
            }
            else {
                freq2[s[i]-'A']++;
            }
        }
        int count=0;
        bool check = 0;
        for(int i=0;i<26;i++){
            if(freq1[i]%2==0){
                count+=freq1[i];
            }
            else{
                count+=freq1[i]-1;
                check=1;
            }
            if(freq2[i]%2==0){
                count+=freq2[i];
            }
            else{
                count+=freq2[i]-1;
                check=1;
            }
        }
        return count+check;
    }
};