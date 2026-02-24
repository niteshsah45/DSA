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
int ans=0;
void findSum(TreeNode* root,string st){

    if(!root) return;

      st+=(root->val+'0');

    if(!root->left && !root->right){
        int num = bitset<32>(st).to_ulong();
        cout<<num<<" ";
        ans+=num;
        return;
    }
    findSum(root->left,st);
    findSum(root->right,st);
}

    int sumRootToLeaf(TreeNode* root) {

        string st="";
        findSum(root,st);
        return ans;
    }
};