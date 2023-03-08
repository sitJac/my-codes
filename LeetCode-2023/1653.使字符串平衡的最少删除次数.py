#
# @lc app=leetcode.cn id=1653 lang=python3
#
# [1653] 使字符串平衡的最少删除次数
#

# @lc code=start
class Solution:
    def minimumDeletions(self, s: str) -> int:
        leftb = 0
        righta = s.count('a')
        result = righta
        for c in s:
            if c == 'a':
                righta -= 1
            else:
                leftb += 1
            result = min(result, leftb + righta)
        return result
# @lc code=end

