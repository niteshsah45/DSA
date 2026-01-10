class Solution {
public:

int t[1000][1000];

int solve(int i,int j, int n1,int n2,string& s1,string& s2){

    if(i>=n1 && j>=n2){

        return 0;
    }
    if(t[i][j]!=-1){
        return t[i][j];
    }
    if(i>=n1){
        return t[i][j] = s2[j]+solve(i,j+1,n1,n2,s1,s2);
    }
    else if(j>=n2){
        return t[i][j] = s1[i]+solve(i+1,j,n1,n2,s1,s2);
    }

    if(s1[i]==s2[j]){
        
        return t[i][j]= solve(i+1,j+1,n1,n2,s1,s2);
    }

    int dels1 = s1[i] + solve(i+1,j,n1,n2,s1,s2);
    int dels2 = s2[j] + solve(i,j+1,n1,n2,s1,s2);

    return t[i][j] = min(dels1,dels2);
}
    int minimumDeleteSum(string s1, string s2) {

        int n1= s1.size();
        int n2=s2.size();

        memset(t,-1,sizeof(t));

        return solve(0,0,n1,n2,s1,s2);   
    }
};