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
void traversal(TreeNode* root, vector<int>& result){

    if(!root) return;

    traversal(root->left,result);
    result.push_back(root->val);
    traversal(root->right,result);
}
    bool findTarget(TreeNode* root, int k) {
        

        if(!root) return NULL;
        vector<int> result;
        traversal(root,result);

        int end = result.size()-1;
        int start =0;

        while(start<end){

            if(result[start]+result[end]==k) return true;

            else if(result[start]+result[end]>k){
                end--;
            }
            else{
                start++;
            }

        }
        return false;

    }
};