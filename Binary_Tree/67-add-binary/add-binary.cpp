class Solution {
public:
    string addBinary(string a, string b) {

        int n1=a.size()-1;
        int n2= b.size()-1;

        string s = "";

        int carry=0;

        while(n1>=0 || n2>=0){
            int sum=carry;

           if(n1>=0) sum += a[n1]-'0';
           if(n2>=0) sum += b[n2]-'0';
            cout<<sum;

            if(sum<2){

                s+=(char)(sum+'0');
                carry=0;

            }
            else{
                
                s+= (char)(sum%2+'0');

                carry=sum/2;
               
            }
           if(n1>=0) n1--;
           if(n2>=0) n2--;
        }
        if(carry){
            s+=(char)(carry+'0');
        }
        reverse(s.begin(),s.end());

        return s;
        
    }
};