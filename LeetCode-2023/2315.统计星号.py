#
# @lc app=leetcode.cn id=2315 lang=python3
#
# [2315] 统计星号
#

# @lc code=start
class Solution:
    def countAsterisks(self, s: str) -> int:
        flag = True
        count = 0
        for c in s:
            if c == '|':
                flag = not flag
            if flag == True and c == '*':
                count += 1
        return count
# @lc code=end

