class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {

        int totalapple = accumulate(apple.begin(),apple.end(),0);
        sort(capacity.begin(),capacity.end());
        int count =0;
        for(int i=capacity.size()-1;i>=0;i--){
            if(totalapple>0){
                 totalapple = totalapple-capacity[i];
                 count++;
            }
            else if(totalapple<=0) break;
        }
        return count;  
    }
};