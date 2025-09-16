class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1=0,count1=0,count2=0,el2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
           if(nums[i]==el1) count1++;

           else if(nums[i]==el2) count2++;

            else if(count1==0){
                el1=nums[i];
                count1++;
            }
            else if(count2==0){
                el2=nums[i];
                count2++;
           }
           else{
            count1--;
            count2--;
           }

        }
        int count11=0,count12=0;
        vector<int> result;
        for(int i=0;i<n;i++){
            if(nums[i]==el1) count11++;
            else if(nums[i]==el2) count12++;
        }
        if(count11>(n/3)) result.push_back(el1);
        if(count12>(n/3)) result.push_back(el2);
        return result;
    }
};