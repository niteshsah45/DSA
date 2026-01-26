class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {

        vector<vector<int>> ans;

        sort(arr.begin(),arr.end());

        int diff=INT_MAX;
        int n = arr.size();

        for(int i=0;i<n-1;i++){

            int check = abs(arr[i]-arr[i+1]);

            diff=min(diff,check);

        }
        for(int i=0;i<n-1;i++){

            int curr = abs(arr[i]-arr[i+1]);

            if(curr==diff){
                ans.push_back({arr[i],arr[i+1]});
            }
        }
        return ans;
    }
};