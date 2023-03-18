#
# @lc app=leetcode.cn id=2389 lang=python3
#
# [2389] 和有限的最长子序列
#

# @lc code=start
class Solution:
    def binary_search(self, f: List[int], target: int) -> int:
        low, high = 1, len(f)
        while low < high:
            mid = low + (high - low) // 2
            if f[mid] > target:
                high = mid
            else:
                low = mid + 1
        return low

    def answerQueries(self, nums: List[int], queries: List[int]) -> List[int]:
        n, m = len(nums), len(queries)
        answer = [0] * m
        f = [0] * (n + 1)
        nums.sort()
        for i in range(n):
            f[i + 1] = f[i] + nums[i]
        for i in range(m):
            answer[i] = self.binary_search(f, queries[i]) - 1
        return answer
# @lc code=end

