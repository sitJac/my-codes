#
# @lc app=leetcode.cn id=2185 lang=python3
#
# [2185] 统计包含给定前缀的字符串
#

# @lc code=start
class Solution:
    def prefixCount(self, words: List[str], pref: str) -> int:
        return len([x for x in words if x[0:len(pref)] == pref])
        # return sum(x.startswith(pref) for x in words)
# @lc code=end

