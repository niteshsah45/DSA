#include<bits/stdc++.h>
using namespace std;
 string decode(string str){
    string result="";
    for(int i=0;i<str.length();i++){
        // storing the str in result
        if(str[i]!=']'){
            result.push_back(str[i]);
        }
        else{
            // extracting the str from result
            string st="";
            while(!result.empty() && result.back()!='['){
               st+=result.back();
                result.pop_back();
            }
            //reversing the str
            reverse(st.begin(),st.end());
            //remove the last character from the result which is [
            if(!result.empty() && result.back()=='['){
            result.pop_back();
            }

            //extract the num from the result
            string num="";
            while(!result.empty() && isdigit(result.back())){
               num+=result.back();
                result.pop_back();
            }
            //reversing the num
            reverse(num.begin(),num.end());
            if(num.empty()){
                cout<<"not found";
                return "";
            }
            //convert string to interger
            int n= stoi(num);

            //inserting the string n times
            for(int j=0;j<n;j++){
                result+=st;
            }
        
        }

        
    }
    return result;
 }
int main(){
     string str;
     cin>>str;
     cout<<decode(str);
     return 0;
}