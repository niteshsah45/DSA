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
TreeNode* build(vector<int>& preorder,int prestart,int preend,
            vector<int>& inorder,int instart,int inend,
            map<int,int>& inordermap){

    if(prestart > preend || instart > inend) return NULL;

    TreeNode* root = new TreeNode(preorder[prestart]);

    int inroot = inordermap[root->val];
    int numLeft = inroot - instart;

    root->left = build(preorder,prestart+1,prestart+numLeft,inorder,instart,inroot-1,inordermap);
    root->right = build(preorder,prestart+numLeft+1,preend,inorder,inroot+1,inend,inordermap);
    return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        map<int,int> inordermap;
        for(int i=0;i<inorder.size();i++){
            inordermap[inorder[i]]=i;
        }

        TreeNode* root = build(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,inordermap);
        return root;
    }
};