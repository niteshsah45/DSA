class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry =1;
        int n = digits.size();
        for(int i=n-1;i>=0;i--){
            if(carry && i>0){
                int sum = digits[i]+1;
                digits[i]=sum%10;
                carry = sum/10;
            }
            else if(carry && i==0){
                if(digits[i]<9) digits[i]+=carry;

                else {
                    digits[i]=0;
                    digits.insert(digits.begin(),1);
                }
                break;
            }
            else{
                break;
            }
        }
        return digits;
    }
};