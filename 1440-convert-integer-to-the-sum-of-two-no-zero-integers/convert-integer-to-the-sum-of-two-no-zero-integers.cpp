class Solution {
public:
bool hasZero(int a){
    while(a>0){
        if(a%10==0) return true;
        a/=10;
    }
    return false;
}
    vector<int> getNoZeroIntegers(int n) {
        vector<int> result;
       for(int a=1;a<n;a++){
        int b=n-a;
        if(!hasZero(a) && !hasZero(b)){
           result.push_back(a);
           result.push_back(b);
           break;
        }
       }
       return result;
       
    }
};