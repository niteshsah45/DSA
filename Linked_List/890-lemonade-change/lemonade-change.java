class Solution {
    public boolean lemonadeChange(int[] bills) {

        int n = bills.length;

        int r5=0;
        int r10=0;
        int r20=0;

        //Arrays.sort(bills);

        for(int i=0;i<n;i++){

            if(bills[i]==5){

                r5++;
                continue;
            }
            else if(bills[i]==10 && r5>0){

                r5--;
                r10++;
                continue;

            }
            else if(bills[i]==20 && r5>0){

                if(r10>0){
                    r10--;
                    r5--;
                }
                else if(r5>2){
                    r5-=3;
                }
                else return false;
                
                continue;
            }
            else return false;
        }

        return true;
        
    }
}