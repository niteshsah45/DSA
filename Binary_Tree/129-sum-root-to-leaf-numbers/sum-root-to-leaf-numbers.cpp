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
void findPath(TreeNode* root,string& level, int& ans){

    if(!root) return;
    level.push_back(root->val + '0');
    if(!root->left && !root->right){
        int currsum = stoi(level);
        ans+=currsum;
    }
    findPath(root->left,level,ans);
    findPath(root->right,level,ans);
    level.pop_back();
}
    int sumNumbers(TreeNode* root) {

        string level;
        int ans =0;
        if(!root) return ans;
        findPath(root,level,ans);
        return ans;
    }
};