#
# @lc app=leetcode.cn id=2309 lang=python3
#
# [2309] 兼具大小写的最好英文字母
#

# @lc code=start
class Solution:
    def greatestLetter(self, s: str) -> str:
        ss = set(s)
        for c in ascii_uppercase[::-1]:
            if c in ss and c.lower() in ss:
                return c
        return ''
# @lc code=end

