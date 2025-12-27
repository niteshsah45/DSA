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
TreeNode* build(vector<int>& inorder,int is,int ie,vector<int>& postorder,int ps,int pe,map<int,int>& inmap){

    if(ps>pe || is>ie) return NULL;

    TreeNode* root = new TreeNode(postorder[pe]);

    int inroot = inmap[root->val];
    int numleft = inroot-is;

    root->left = build(inorder,is,inroot-1,postorder,ps,ps+numleft-1,inmap);
    root->right = build(inorder,inroot+1,ie,postorder,ps+numleft,pe-1,inmap);
    return root;
}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

        map<int,int> inmap;
        for(int i=0;i<inorder.size();i++){
            inmap[inorder[i]]=i;
        }
        return build(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,inmap);
    }
};