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
void traverseTree(TreeNode* root, vector<string>& ans,vector<int>& result){
    if(!root) return;
    result.push_back(root->val);
    if(!root->left && !root->right){
        string st;
        for(int i=0;i<result.size();i++){
            st+=to_string(result[i]);
            if(i<result.size()-1) st+="->";
        }
        ans.push_back(st);
    }
    traverseTree(root->left,ans,result);
    traverseTree(root->right,ans,result);
    result.pop_back();

}
    vector<string> binaryTreePaths(TreeNode* root) {

        vector<string> ans;
        vector<int> result;
        if(root==NULL) return ans;
        traverseTree(root,ans,result);
        return ans;
        
    }
};