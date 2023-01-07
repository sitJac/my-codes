#
# @lc app=leetcode.cn id=1658 lang=python3
#
# [1658] 将 x 减到 0 的最小操作数
#

# @lc code=start
class Solution:
    def minOperations(self, nums: List[int], x: int) -> int:
        if x < 1:
            return -1
        sum = 0
        for i in nums:
            sum = sum + i
        target = sum - x

        left, right = 0, 0
        now = 0
        result = -1
        while right < len(nums) :
            now = now + nums[right]
            if now == target:
                result = max(result, right - left + 1)
            while left <= right and now >= target:
                now = now - nums[left]
                left = left + 1
                if now == target:
                    result = max(result, right - left + 1)
            right = right + 1
        if result > -1:
            return len(nums) - result
        else:
            return -1
# @lc code=end

