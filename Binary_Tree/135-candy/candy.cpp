class Solution {
public:
    int candy(vector<int>& ratings) {

        int sum =1;
        int n = ratings.size();
        int i=1;
        while(i<n){

            if(ratings[i]==ratings[i-1]){
                sum+=1;
                i++;
                continue;
            }
            int peak=1;
            while(i<n && ratings[i]>ratings[i-1]){
                peak++;
                i++;
                sum+=peak;
            }
            int down =0;
            while(i<n && ratings[i]<ratings[i-1]){
                down++;
                i++;
                sum+=down;
            }
            down++;

            if(peak<down){
                sum+=(down-peak);
            }
        }        
        return sum;
    }
};