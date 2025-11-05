class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int count=0;
        int original = num;
        string ans = to_string(num);
        for(int i=0;i<ans.size()-k+1;i++){
            string part = ans.substr(i,k);
            int result = stoi(part);
            if( result!=0 && original%result==0) count++;
        }
        return count;
    }
};