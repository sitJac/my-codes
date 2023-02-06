#
# @lc app=leetcode.cn id=2319 lang=python3
#
# [2319] 判断矩阵是否是一个 X 矩阵
#

# @lc code=start
class Solution:
    def checkXMatrix(self, grid: List[List[int]]) -> bool:
        n = len(grid)
        for i in range(0, n):
            for j in range(0, n):
                if i == j or i + j == n - 1:
                    if grid[i][j] == 0:
                        return False
                else:
                    if grid[i][j] != 0:
                        return False
        return True
# @lc code=end

