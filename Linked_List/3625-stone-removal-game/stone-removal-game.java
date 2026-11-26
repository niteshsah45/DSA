class Solution {
    public boolean canAliceWin(int n) {


        if(n<10) return false;

        boolean ans = false;
        int track =10;
        while(n>0){

            if(n<track) return ans;
            n-=track;
            track--;
            ans = !ans;
        }

        return ans;
    }
}