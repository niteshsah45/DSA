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
void inorder(TreeNode* root, vector<int>& result){

    if(!root) return;

    inorder(root->left,result);
    result.push_back(root->val);
    inorder(root->right,result);
}
void makeChange(TreeNode* root, vector<int>& result){

    if(!root) return;

    makeChange(root->left,result);
    if(root->val!=result[0]){
        root->val=result[0];
    }
     result.erase(result.begin()+0);
     makeChange(root->right,result);
}
    void recoverTree(TreeNode* root) {

        vector<int> result;
        inorder(root,result);
        sort(result.begin(),result.end());
        makeChange(root,result);
    }
};