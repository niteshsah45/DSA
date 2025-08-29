class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> st;
        string word;
        while(ss>>word){
            st.push_back(word);
        }
        reverse(st.begin(),st.end());
        string ans;
        for(int i=0;i<st.size();i++){
            ans+=st[i];
            if(i<st.size()-1) ans+=" ";
        }
        return ans;
    }
};