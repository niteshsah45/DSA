class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int start=0,end=n-1;
        int sum= numbers[start]+numbers[end];;
        while(start<end){  
            if(sum == target){
                return {start+1,end+1};
            } 
            else if(sum>target){
                sum-=numbers[end];
                end--;
                sum+=numbers[end];
            }
            else if(sum<target){
                sum-=numbers[start];
                start++;
                sum+=numbers[start];
            }
        }
        return {0,0};
    }
};