class Solution {
public:
    int calPoints(vector<string>& op) {

        int n= op.size();

        vector<int> result;

        for(int i=0;i<n;i++){

            if(!isalpha(op[i][0]) && op[i]!="+"){

                int data = stoi(op[i]);
                result.push_back(data);

            }
            else if(op[i]=="+"){

                int finale =0;

                if(result.size()>=1) finale+=result[result.size()-1];

                if(result.size()>=2) finale+= result[result.size()-2];

                result.push_back(finale);
            }
            else{

                if(op[i]=="C"){

                    if(!result.empty()) result.pop_back();

                }
                else{

                        if(result.size()>=1){

                            int dob = 2* result[result.size()-1];
                             result.push_back(dob);
                        }
                       
                    }
            }
        }

        int total=0;

        for(auto x:result){
            total+=x;
        }

        return total;
        
    }
};