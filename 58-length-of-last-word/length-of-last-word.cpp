class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        while(!s.empty() && s.back()==' '){ // check if the string is not empty and at last not space otherwise remove the spaces until all the space is removed
            s.pop_back();
        }
        int pos= s.find_last_of(' '); /// function to find the last space
        string st= s.substr(pos+1); ///  
        return st.size();
    }
};