class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         int n=nums1.size();
         int m=nums2.size();
         int left=0,right=0;
         vector<int> arr3;
         int index=0;
        while(left<n && right<m){
            if(nums1[left]<nums2[right]){
                arr3.push_back(nums1[left]);
                index++;
                left++;
            }
            else{
                arr3.push_back(nums2[right]);
                index++;
                right++;
            }
        }
        while(left<n) {
            arr3.push_back(nums1[left]);
                index++;
                left++;
        }
        while(right<m){
              arr3.push_back(nums2[right]);
                index++;
                right++;
        }
        int last=arr3.size();
             if(last%2==0){
                return (arr3[last/2]+arr3[last/2-1])/2.0;

        }
        else{
            return arr3[last/2];

        }
       


        
    }
};