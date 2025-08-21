class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        int n=mountain.size();
        vector<int> result;
         if(n<3) return result;
        // if(mountain[0]>mountain[1]) result.push_back(0);
        // if(mountain[n-1]>mountain[n-2]) result.push_back(n-1);
        for(int i=1;i<n-1;i++){
            if(mountain[i]>mountain[i+1] && mountain[i]>mountain[i-1]){
                result.push_back(i);
            }
        }
        return result;
    }
};