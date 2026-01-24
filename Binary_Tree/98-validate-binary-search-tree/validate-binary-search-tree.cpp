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
bool valid(TreeNode* root,long long left,long long right){

    if(!root) return true;

    if(root->val<=left || root->val>=right) return false;

    return valid(root->left,left,root->val) && valid(root->right,root->val,right);
}
    bool isValidBST(TreeNode* root) {
        
        if(!root) return true;

        long long left = LLONG_MIN;
        long long right = LLONG_MAX;

        return valid(root,left,right);
    }
};