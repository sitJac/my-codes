/*
 * @lc app=leetcode.cn id=543 lang=cpp
 *
 * [543] 二叉树的直径
 */

// @lc code=start
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
    int ans;
    int maxTravelNumber(TreeNode* node) {
        if(node == nullptr) {
            return 0;
        }
        int maxLeftTravelNumber = maxTravelNumber(node->left);
        int maxRightTravelNumber = maxTravelNumber(node->right);
        ans = max(ans, maxLeftTravelNumber + maxRightTravelNumber + 1);
        return max(maxLeftTravelNumber, maxRightTravelNumber) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        ans = 1;
        maxTravelNumber(root);
        return ans - 1;
    }
};
// @lc code=end

