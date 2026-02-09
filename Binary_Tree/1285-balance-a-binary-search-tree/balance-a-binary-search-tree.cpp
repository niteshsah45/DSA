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
void inorder(vector<int>& result,TreeNode* root){

    if(!root) return;

    inorder(result,root->left);
    result.push_back(root->val);
    inorder(result,root->right);
}
TreeNode* balanceTree(vector<int>& result,int start,int end){

    if(start>end) return NULL;

    int mid = start+(end-start)/2;
    TreeNode* root = new TreeNode(result[mid]);
    root->left= balanceTree(result,start,mid-1);
    root->right = balanceTree(result,mid+1,end);
    return root;
}
    TreeNode* balanceBST(TreeNode* root) {

        vector<int> result;

        inorder(result,root);

        return balanceTree(result,0,result.size()-1);
 
    }
};