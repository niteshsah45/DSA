class Solution {
public:
    string minWindow(string s, string t) {
        int n1=s.size();
        int n2=t.size();
        if(n2>n1) return "";
        vector<int> need(128,0);
        for(char c:t){
            need[c]++;
        }
        int left=0,right=0;
        int required=n2;
        int start=0;
        int minLen=INT_MAX;
        while(right<n1){
          char c=s[right];
          if(need[c]>0) required--;
          need[c]--;
          right++;
          while(required==0){
            if(minLen>right-left){
                minLen=right-left;
                start=left;
            }
            char c=s[left];
            need[c]++;
            if(need[c]>0) required++;
            left++;
          }
            
        }
        return minLen==INT_MAX ? "" : s.substr(start,minLen);
    }
};