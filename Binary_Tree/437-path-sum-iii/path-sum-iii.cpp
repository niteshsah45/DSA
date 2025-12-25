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
long long countFrom(TreeNode* root,long long targetSum){
    if(root==NULL) return 0;
    
    long long  match = root->val==targetSum;
    //if(targetSum<-1999999000) return 0;
    return match+ countFrom(root->left,targetSum-root->val) +
                    countFrom(root->right,targetSum-root->val);

}
    int pathSum(TreeNode* root, int targetSum) {

        if(!root) return 0;

        return countFrom(root,targetSum) +
            pathSum(root->left,targetSum) +
            pathSum(root->right,targetSum);
    }
};