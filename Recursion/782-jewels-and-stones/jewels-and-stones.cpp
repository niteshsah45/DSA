class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> freqS;
        int count=0;
        for(auto c:stones) freqS[c]++;

        for(auto c:jewels){
            if(freqS.count(c)) count+=freqS[c];
        }
        return count;
    }
};