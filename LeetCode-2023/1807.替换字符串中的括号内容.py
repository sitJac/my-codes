#
# @lc app=leetcode.cn id=1807 lang=python3
#
# [1807] 替换字符串中的括号内容
#

# @lc code=start
import re
class Solution:
    def evaluate(self, s: str, knowledge: List[List[str]]) -> str:
        key_value = {key: value for key, value in knowledge}
        pattern = re.compile(r'\((.*?)\)')
        for match in pattern.finditer(s):
            key = match.group(1)
            if key in key_value:
                s = s.replace(match.group(), key_value[key])
            else:
                s = s.replace(match.group(), '?')
        return  s
# @lc code=end

