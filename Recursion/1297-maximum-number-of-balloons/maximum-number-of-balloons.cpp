class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> store;
        for(auto c:text){
            if(c=='b'||c=='a'||c=='l'||c=='o'||c=='n')
            store[c]++;
        }
        int b=store['b'];
        int a=store['a'];
        int l=store['l']/2;
        int o=store['o']/2;
        int n = store['n'];

        return min({b,a,l,o,n});
    }
};