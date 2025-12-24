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
void findSum(TreeNode* root,int targetSum, vector<vector<int>>& ans,vector<int>& level,int finale){
    
        if(!root) return;
        level.push_back(root->val);
        if(!root->left && !root->right && targetSum == root->val){
                ans.push_back(level);
        }
        targetSum-=root->val;
        findSum(root->left,targetSum,ans,level,finale);
        findSum(root->right,targetSum,ans,level,finale);
        level.pop_back();
 }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        vector<vector<int>> ans;
        if(root==NULL) return ans;
        vector<int> level;
        int finale = root->val;

        findSum(root,targetSum,ans,level,finale);
        return ans;
        
    }
};