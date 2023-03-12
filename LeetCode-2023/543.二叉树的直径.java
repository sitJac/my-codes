/*
 * @lc app=leetcode.cn id=543 lang=java
 *
 * [543] 二叉树的直径
 */

// @lc code=start
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
    int ans;
    int maxTravelNumber(TreeNode node) {
        if(node == null) {
            return 0;
        }
        int L = maxTravelNumber(node.left);
        int R = maxTravelNumber(node.right);
        ans = Math.max(ans, L + R + 1);
        return Math.max(L, R) + 1;
    }
    public int diameterOfBinaryTree(TreeNode root) {
        ans = 1;
        maxTravelNumber(root);
        return ans - 1;
    }
}
// @lc code=end

