#
# @lc app=leetcode.cn id=543 lang=python3
#
# [543] 二叉树的直径
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        self.ans = 0
        def maxTravelNumber(node):
            if node == None:
                return 0
            L = maxTravelNumber(node.left)
            R = maxTravelNumber(node.right)
            self.ans = max(self.ans, L + R + 1)
            return max(L, R) + 1
        maxTravelNumber(root)
        return self.ans - 1
# @lc code=end

