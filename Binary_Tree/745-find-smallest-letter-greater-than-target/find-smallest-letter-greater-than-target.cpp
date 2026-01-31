class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        int n = letters.size();
        char ans = letters[0];

        int start=0,end=n-1;

        while(start<=end){

            int mid=start+(end-start)/2;

            if(letters[mid]>target){
                ans = letters[mid];
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};