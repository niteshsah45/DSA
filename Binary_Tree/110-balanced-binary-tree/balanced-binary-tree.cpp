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

int checkTree(TreeNode* root){

    if(!root) return NULL;

    int leftheight = checkTree(root->left);
    if(leftheight==-1) return -1;

    int rightheight = checkTree(root->right);

    if(rightheight==-1) return -1;

    if(abs(leftheight-rightheight)>1) return -1;

    return 1+max(leftheight,rightheight);
}
    bool isBalanced(TreeNode* root) {

        return checkTree(root)!=-1;
        
    }
};