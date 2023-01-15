#
# @lc app=leetcode.cn id=2293 lang=python3
#
# [2293] 极大极小游戏
#

# @lc code=start
class Solution:
    def minMaxGame(self, nums: List[int]) -> int:
        n = len(nums)
        if n == 1:
            return nums[0]
        newNums = [0] * (n // 2)
        for i in range(n // 2):
            if i % 2 == 0:
                newNums[i] = min(nums[2 * i], nums[2 * i + 1])
            else:
                newNums[i] = max(nums[2 * i], nums[2 * i + 1])
        return self.minMaxGame(newNums)
# @lc code=end

