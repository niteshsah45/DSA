class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.size();
        for(int i=0;i<n;i+=2*k){ // using 2*k block of loop 
            int left=i;
            int right= min(i+k-1,n-1); // we use min function of n-1 if k is greater than n
            while(left<right){
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        return s;
        
    }
};