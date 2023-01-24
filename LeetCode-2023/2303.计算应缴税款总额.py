#
# @lc app=leetcode.cn id=2303 lang=python3
#
# [2303] 计算应缴税款总额
#

# @lc code=start
class Solution:
    def calculateTax(self, brackets: List[List[int]], income: int) -> float:
        totalTax = lower = 0
        for upper, percent in brackets:
            tax = (min(income, upper) - lower) * percent
            totalTax += tax
            lower = upper
        return totalTax / 100.0
# @lc code=end

