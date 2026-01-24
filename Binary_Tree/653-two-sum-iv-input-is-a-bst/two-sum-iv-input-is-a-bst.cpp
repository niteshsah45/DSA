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
void preorder(TreeNode* root,vector<int>& result){
    if(!root) return;

    preorder(root->left,result);
    result.push_back(root->val);
    preorder(root->right,result);
}
    bool findTarget(TreeNode* root, int k) {

        vector<int> result;
        preorder(root,result);

        int n = result.size();
        int start=0,end=n-1;

        while(start<end){
            int sum = result[start]+result[end];
            if(sum==k) return true;
            else if(sum>k){
                end--;
            }
            else{
                start++;
            }
        }
        return false;
        
    }
};