class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {


        int n1 = nums1.size();
        int n2 = nums2.size();

        int left=0,right=0;

        int maxiPair=0;

        while(left<n1 && right<n2){


            if(left>right){
                right=left;
            }

            if(nums1[left]<=nums2[right] && left<=right){

                maxiPair = max(maxiPair,abs(left-right));

                right++;
            }
            else if(nums1[left]>nums2[right]){
                left++;
            }


        }
        return maxiPair;
    }
};