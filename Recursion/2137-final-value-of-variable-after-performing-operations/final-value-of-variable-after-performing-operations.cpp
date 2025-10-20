class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int finale=0;
        for(int i=0;i<operations.size();i++){
            string result = operations[i];
            for(int i=0;i<result.size();i++){
                if(result[i]=='+'){
                    finale=finale+1;
                    break;
                   
                }
                else if(result[i]=='-'){
                    finale-=1;
                    break;
                }
            }
        }
        return finale;
        
    }
};