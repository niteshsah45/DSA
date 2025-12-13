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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> qu;
        qu.push(root);
        bool rev = false;;
        while(!qu.empty()){
            vector<int> level;
            int size = qu.size();
            for(int i=0;i<size;i++){
                TreeNode* node = qu.front();
                qu.pop();
                level.push_back(node->val);
                     if(node->left) qu.push(node->left);
                      if(node->right) qu.push(node->right);
            }
            if(rev){
                reverse(level.begin(),level.end());
                rev = false;
            }
            else{
                rev = true;
            }
            ans.push_back(level);
        }
        return ans;
    }
};