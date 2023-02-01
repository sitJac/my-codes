#
# @lc app=leetcode.cn id=2325 lang=python3
#
# [2325] 解密消息
#

# @lc code=start
class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        cur = "a"
        rules = dict()

        for c in key:
            if c != " " and c not in rules:
                rules[c] = cur
                cur = chr(ord(cur) + 1)

        ans = "".join(rules.get(c, " ") for c in message)
        return ans
# @lc code=end

