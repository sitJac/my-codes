#
# @lc app=leetcode.cn id=2180 lang=python3
#
# [2180] 统计各位数字之和为偶数的整数个数
#

# @lc code=start
class Solution:
    def countEven(self, num: int) -> int:
        cnt = 0
        for i in range(1, num + 1):
            sum = 0
            while i != 0:
                sum = sum + (i % 10)
                i = i // 10
            if sum % 2 == 0:
                cnt = cnt + 1
        return cnt
# @lc code=end

