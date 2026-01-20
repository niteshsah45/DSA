/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
TreeNode* findLcaNode(TreeNode* root, TreeNode* p, TreeNode* q){

    if(!root) return NULL;

    if(root->val>p->val && root->val>q->val){
       return  findLcaNode(root->left,p,q);
    }
    if(root->val<p->val && root->val<q->val){

        return findLcaNode(root->right,p,q);
    }
    return root;
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        return findLcaNode(root,p,q);
        
    }
};