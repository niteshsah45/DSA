class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {

        int n1= queries.size();
        int n2= dictionary.size();

        vector<string> ans;

        for(int i=0;i<n1;i++){

            string s1 = queries[i];
        
            for(int j=0;j<n2;j++){
                string s2 = dictionary[j];

                if(s1.size()!=s2.size()) continue;

                int change=0;   
                int start=0;

                while(start<s1.size()){

                    if(s1[start]!=s2[start]) change++;

                    start++;
                }

                if(change<=2){
                    ans.push_back(s1);
                    break;
                }
            }
        }
        return ans;
        
    }
};