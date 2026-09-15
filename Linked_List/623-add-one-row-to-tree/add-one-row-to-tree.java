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

    public void addRow(TreeNode root, int val, int depth){

        if(root==null) return;

        if(depth==1){

            TreeNode leftside = root.left;
            TreeNode rightside = root.right;

            root.left = new TreeNode(val);
            root.right= new TreeNode(val);

            root.left.left = leftside;
            root.right.right=rightside;

            return; 
        }
        addRow(root.left,val,depth-1);
        addRow(root.right,val,depth-1);
    }
    public TreeNode addOneRow(TreeNode root, int val, int depth) {

        if(root==null) return null;

        if(depth==1){
            
            TreeNode newroot = new TreeNode(val);

            newroot.left = root;

             root=newroot;
             return root;

        }

        addRow(root,val,depth-1);

        return root;
        
    }
}