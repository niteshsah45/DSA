class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // moorse voting algo which cancel each other to get the most repeated elments from the array
        int element1=INT_MIN,element2=INT_MIN;
        int count1=0,count2=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(count1==0 && nums[i]!=element2){
                element1=nums[i];
                count1++;
            }
            else if(count2==0 && nums[i]!=element1){
                element2=nums[i];
                count2++;
            }
            else if(nums[i]==element1) count1++;
            else if(nums[i]==element2) count2++;
            else{
                count1--;
                count2--;
            }

        }
        vector<int>final;
        int count12=0;
        int count21=0;
        for(int i=0;i<n;i++){
            if(nums[i]==element1) count12++;
            if(nums[i]==element2) count21++;
        }
        int mini=int(n/3)+1;
        if(count12>= mini){
            final.push_back(element1);
        }
        if(count21>=mini) final.push_back(element2);
        
        return final;
    }
};