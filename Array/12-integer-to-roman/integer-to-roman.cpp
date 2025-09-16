class Solution {
public:
    string intToRoman(int num) {
    string ans="";
    while(num>=1){
         if(num>=1000){
        ans+='M';
        num-=1000;
        continue;
         }
        else if(num>=900){
            ans+="CM";
            num-=900;
            continue;
        }
        else if(num>=500){
        ans+='D';
        num-=500;
        continue;
        }
        else if(num>=400){
            ans+="CD";
            num-=400;
            continue;
        }
        else if(num>=100){
        ans+='C';
        num-=100;
        continue;
        }
        else if(num>=90){
            ans+="XC";
            num-=90;
            continue;
        }
        else if(num>=50){
        ans+='L';
        num-=50;
        continue;
        }
        else if(num>=40){
            ans+="XL";
            num-=40;
            continue;
        }
        else if(num>=10){
        ans+='X';
        num-=10;
        continue;
        }
        else if(num>=9){
            ans+="IX";
            num-=9;
            continue;
        }
        else if(num>=5){
        ans+='V';
        num-=5;
        continue;
         }
         else if(num>=4){
            ans+="IV";
            num-=4;
            continue;
         }
        else{
        ans+='I';
        num-=1;
        continue;
        }
    }
   
    return ans;   
    }
};