class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int rightSum=0,leftSum=0,maxSum=0;
        for(int i=0;i<k;i++){
            leftSum=leftSum+cardPoints[i];
        }
        maxSum=leftSum;
        int rightIndex=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            leftSum=leftSum-cardPoints[i];
            rightSum=rightSum+cardPoints[rightIndex];
            rightIndex-=1;
            maxSum = max(maxSum,rightSum+leftSum);
        }
        return maxSum;
    }
};