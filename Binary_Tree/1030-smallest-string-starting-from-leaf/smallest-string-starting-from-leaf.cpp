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
void findPath(TreeNode* root,vector<string>& ans,vector<int>& level){
    if(!root) return;
    level.push_back(root->val);
    if(!root->left && !root->right){
        string lvl;
        for(auto& x:level){
            lvl+=u_char(x+97);
        }
        reverse(lvl.begin(),lvl.end());
        ans.push_back(lvl);
    }
    findPath(root->left,ans,level);
    findPath(root->right,ans,level);
    level.pop_back();
}
    string smallestFromLeaf(TreeNode* root) {

        vector<string> ans;
        vector<int> level;
        string first;
        if(!root) return first;
        findPath(root,ans,level);
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};