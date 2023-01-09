#
# @lc app=leetcode.cn id=1806 lang=python3
#
# [1806] 还原排列的最少操作步数
#

# @lc code=start
class Solution:
    def reinitializePermutation(self, n: int) -> int:
        perm = [i for i in range(0, n)]
        target = [i for i in range(0, n)]
        ans = 0
        while True:
            arr = [perm[i // 2] if i % 2 == 0 else perm[n // 2 + (i - 1) // 2] for i in range(n)]
            perm = arr
            ans += 1
            if perm == target:
                break
        return ans


# @lc code=end

