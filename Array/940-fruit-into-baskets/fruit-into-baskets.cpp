class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left=0;
        int maxfruit=0;
        unordered_map<int,int> fruitcount;
        for(int right=0;right<fruits.size();right++){
            fruitcount[fruits[right]]++;
            while(fruitcount.size()>2){
                fruitcount[fruits[left]]--;
                if(fruitcount[fruits[left]]==0){
                    fruitcount.erase(fruits[left]);
                }
                left++;
            }
            maxfruit=max(maxfruit,right-left+1);
        }
        return maxfruit;
        
    }
};