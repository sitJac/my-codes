#
# @lc app=leetcode.cn id=1819 lang=python3
#
# [1819] 序列中不同最大公约数的数目
#

# @lc code=start
class Solution:
    def countDifferentSubsequenceGCDs(self, nums: List[int]) -> int:
        maxVal = max(nums)
        occured = [False] * (maxVal + 1)
        for num in nums:
            occured[num] = True
        ans = 0
        for i in range(1, maxVal + 1):
            subGcd = 0
            for j in range(i, maxVal + 1, i):
                if occured[j]:
                    if subGcd == 0:
                        subGcd = j
                    else:
                        subGcd = gcd(subGcd, j)
                    if subGcd == i:
                        ans += 1
                        break
        return ans
# @lc code=end

