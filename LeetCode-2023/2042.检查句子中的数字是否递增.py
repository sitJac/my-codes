#
# @lc app=leetcode.cn id=2042 lang=python3
#
# [2042] 检查句子中的数字是否递增
#

# @lc code=start
from curses.ascii import isdigit
from posixpath import split


class Solution:
    def areNumbersAscending(self, s: str) -> bool:
        ss = [int(i) for i in s.split() if i.isdigit()]
        for i in range(len(ss) - 1):
            if (ss[i] >= ss[i+1]):
                return False
        return True

# @lc code=end

