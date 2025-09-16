class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.size();
        int index=0;
        for(int i=0;i<n;i++){
            if(word[i]==ch){
                index=i;
                break;
            }
        }
        int start=0;
        while(start<=index){
            swap(word[start],word[index]);
            start++;
            index--;
        }
        return word;
        
    }
};