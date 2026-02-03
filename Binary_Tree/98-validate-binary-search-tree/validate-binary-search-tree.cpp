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
void storepre(TreeNode* root,vector<int>& pre){


    if(!root) return;
    storepre(root->left,pre);
    pre.push_back(root->val);
    storepre(root->right,pre);
}
    bool isValidBST(TreeNode* root) {


        vector<int> preorder;

        storepre(root,preorder);

        int n = preorder.size();
        for(int i=0;i<n-1;i++){

            if(preorder[i]>=preorder[i+1]) return false;
        }

        return true;

    }
};