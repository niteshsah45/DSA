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

TreeNode* helper(TreeNode* root){

    if(root->left==NULL){
        return root->right;
    }
    if(root->right==NULL){
        return root->left;
    }

    TreeNode* rightpart = root->right;
    TreeNode* rightLast = findLast(root->left);
    rightLast->right=rightpart;
    return root->left;
}
TreeNode* findLast(TreeNode* root){

    if(root->right==NULL) return root;
    return findLast(root->right); 
}
    TreeNode* deleteNode(TreeNode* root, int key) {


        if(!root) return NULL;

        if(!root->left && !root->right && root->val==key) return NULL;

        TreeNode* dummy = root;
        if(root->val==key){

            return helper(root);
        }

        while(root!=NULL){

            if(root->val>key){

                if(root->left && root->left->val==key){

                    root->left = helper(root->left);
                }
                else{
                    root=root->left;
                }
            }
            else{
                if(root->right && root->right->val==key){

                    root->right = helper(root->right);
                }
                else{
                    root=root->right;
                }
            }
        }
        return dummy;
        
    }
};