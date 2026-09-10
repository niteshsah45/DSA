/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {


    public int anskey=0;

    public int count(TreeNode root){

        if(root==null) return 0;

        return 1+count(root.left)+count(root.right);
    }

    public int findsumcount(TreeNode root){

        if(root==null) return 0;

        return root.val+findsumcount(root.left)+findsumcount(root.right);

    }


    public void dfs(TreeNode root){

        if(root==null) return;

        int left = findsumcount(root.left);
        int leftcount = count(root.left);
        int right = findsumcount(root.right);
        int rightcount = count(root.right);

        int totalSum = left+right+root.val;
        int totalCount = leftcount+rightcount+1;

        System.out.print(totalSum+" "+totalCount+" ");

        if(totalSum/totalCount==root.val){
            anskey++;
        }
        dfs(root.left);
        dfs(root.right);


    }
    public int averageOfSubtree(TreeNode root) {

        if(root==null) return 1;

        // if(root.left==null || root.right==null) return root.val;

         dfs(root);

         return anskey;
        
    }
}