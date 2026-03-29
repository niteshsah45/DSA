class Solution {
public:
    bool canBeEqual(string s1, string s2) {

        int n1 = s1.size();
        int n2 = s2.size();

        if(n1!=n2) return false;

        int start=0,end=2;
        while(end<n1){

            string temp1 = "";
            temp1+=s1[start];
            temp1+=s1[end];

            string temp2 = "";
            temp2+=s2[start];
            temp2+=s2[end];
            sort(temp1.begin(),temp1.end());
            sort(temp2.begin(),temp2.end());
            if(temp1!=temp2) return false;
            start++;
            end++;

        }   
        return true;
    }
};