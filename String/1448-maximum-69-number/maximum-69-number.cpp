class Solution {
public:
    int maximum69Number (int num) {
        string st=to_string(num);
        for(char &c:st){
            if(c=='6') {
                c='9';
                break;
            }
        }
        return stoi(st);
        // int temp=num;
        // int pos=1;
        // int maxi=num;
        // while(temp>0){
        //     int digit=temp%10;
        //     int fliping=(digit==6?9:6);
        //     int finale=num-digit*pos+fliping*pos; // 9669-9*1+6*1=9666
        //     maxi=max(maxi,finale);
        //     temp/=10;
        //     pos*=10;
        // }
        // return maxi;
    }   
};