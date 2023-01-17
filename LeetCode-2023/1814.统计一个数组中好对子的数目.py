#
# @lc app=leetcode.cn id=1814 lang=python3
#
# [1814] 统计一个数组中好对子的数目
#

# @lc code=start
class Solution:
    def countNicePairs(self, nums: List[int]) -> int:
        def rev(num: int) -> int:
            result = 0
            while num:
                result = result * 10 + num % 10
                num = num // 10
            return result
        cnt = Counter(x - rev(x) for x in nums)
        return sum(v * (v - 1) // 2 for v in cnt.values()) % 1000000007
# @lc code=end

