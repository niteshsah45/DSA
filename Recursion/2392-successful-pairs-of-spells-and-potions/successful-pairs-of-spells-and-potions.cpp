class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        int n1=potions.size();
        vector<int> result;
        for(int i=0;i<spells.size();i++){
            long long minpos= (spells[i]+success-1)/spells[i];
            int index = lower_bound(potions.begin(),potions.end(),minpos)-potions.begin();
            result.push_back(n1-index);
        }
        return result;
    }
};