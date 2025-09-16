class Solution {
public:
    string largestGoodInteger(string num) {
        if(num.size()<3) return "";

        char result = 0;
        for(int i=2; i<num.size(); i++){
            if(num[i]==num[i-1] && num[i-1] == num[i-2])
                result = max(result, num[i]);
        }

        if(result == 0) return "";
        return string(3, result);
    }
};