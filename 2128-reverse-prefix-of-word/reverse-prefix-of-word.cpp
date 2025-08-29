class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.size();
        int last=0;
        for(int i=0;i<n;i++){
            if(word[i]==ch){
                last=i;
                 break;
            }
           
        }
        int left=0;
        while(left<last){
            swap(word[left],word[last]);
            left++;
            last--;
        }
        return word;
    }
};