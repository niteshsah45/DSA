/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

int findGood(TreeNode* root,int maxi){

    if(!root) return 0;
    int ans =0;
    if(root->val>=maxi){
        maxi=root->val;
        ans=1;
    } 

   return ans+ findGood(root->left,maxi) +
    findGood(root->right,maxi);
}
    int goodNodes(TreeNode* root) {

        if(!root) return 0;
        int ans =0;
        int maxi = root->val;
        return findGood(root,maxi);
        //return ans;
    }
};