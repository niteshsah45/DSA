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

int treeHeight(TreeNode* root){

    if(!root){
        return NULL;
    }

    int left = treeHeight(root->left);

    if(left==-1) return -1;

    int right = treeHeight(root->right);

    if(right==-1) return -1;


    if(abs(left-right)>1) return -1;

    return 1+ max(left,right);
}
    bool isBalanced(TreeNode* root) {

        if(!root) return true;

        return treeHeight(root)>=1;
    }
};