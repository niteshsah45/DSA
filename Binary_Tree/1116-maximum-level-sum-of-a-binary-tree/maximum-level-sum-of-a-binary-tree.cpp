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
    int maxLevelSum(TreeNode* root) {

        if(!root) return 0;
        queue<TreeNode*> qu;
        qu.push(root);
        int ans =INT_MIN;
        int level=1,index=1;
        while(!qu.empty()){

            int size= qu.size();
            int sum =0;
            for(int i=0;i<size;i++){

                TreeNode* node = qu.front();
                qu.pop();
                sum+=node->val;
                if(node->left){
                    qu.push(node->left);
                }
                if(node->right){
                    qu.push(node->right);
                }
            }
            if(sum>ans){
                level=index;
                ans=sum;
            }
            index++;
        }
        return level;
    }
};