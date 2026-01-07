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

    long long ans =0;
    long long totalsum = 0;
    int mode = 1e9 + 7;
    long long subtreesum =0;

int searchTree(TreeNode* root){
    if(!root) return 0;

    int left = searchTree(root->left);
    int right =searchTree(root->right);

    subtreesum = left+right+root->val;

    long long product = subtreesum*(totalsum-subtreesum);
    ans = max(ans,product);
    return subtreesum;
}
void findTotalSum(TreeNode* root){
    if(!root) return;
    totalsum+=root->val;
    findTotalSum(root->left);
    findTotalSum(root->right);
}
    int maxProduct(TreeNode* root) {
        if(!root) return 0;

        findTotalSum(root);
        searchTree(root);
        return ans%mode;
        
    }
};