class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        int _5counter=0;
        int _10counter=0;

        int n = bills.size();

        for(int i=0;i<n;i++){


            if(bills[i]==5){
                _5counter++;
            }
            else if(bills[i]==10 && _5counter){

                _10counter++;
                _5counter--;
            }
            else if(bills[i]==20 && _5counter>=3 || (_10counter && _5counter) ){

                if(_10counter){
                    _10counter--;
                    _5counter--;
                }
                else{

                    _5counter-=3;
                }
            }
            else{
                return false;
            }
        }
        return true;
    }
};