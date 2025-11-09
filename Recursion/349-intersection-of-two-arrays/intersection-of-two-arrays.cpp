class Solution {
public:
void checkInter(vector<int>& nums1,vector<int>& nums2,set<int>& st){
    for(int i=0;i<nums1.size();i++){
        if(find(nums2.begin(),nums2.end(),nums1[i])!=nums2.end()){
            st.insert(nums1[i]);
        }
    }

}
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        set<int> st;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        if(nums1.size()<nums2.size()){
          checkInter(nums1,nums2,st);
        }
        else{
          checkInter(nums2,nums1,st);
        }
         result.insert(result.end(),st.begin(),st.end());
         return result;
    }
};