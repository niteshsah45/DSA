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
int helper(TreeNode* root, int& maxi){

    if(root==NULL) return 0;

    int leftMaxSum = max(0,helper(root->left,maxi));
    int rightMaxSum = max(0,helper(root->right,maxi));

    maxi = max(maxi,root->val+leftMaxSum+rightMaxSum);

    return root->val + max(leftMaxSum,rightMaxSum);
}
    int maxPathSum(TreeNode* root) {

        int maxiSum =INT_MIN;
        if(root==NULL) return maxiSum;
        helper(root,maxiSum);
        return maxiSum;
        
    }
};