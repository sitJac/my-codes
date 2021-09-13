#
# @lc app=leetcode.cn id=20 lang=python
#
# [20] 有效的括号
#

# @lc code=start
class Solution(object):
    def isValid(self, s):
        stack = list([])
        for ch in s:
            if ch == '(' or ch == '[' or ch == '{':
                stack.append(ch)
            else:
                if len(stack) == 0:
                    return False
                if ch == ')':
                    if stack[len(stack) - 1] != '(':
                        return False
                elif ch == ']':
                    if stack[len(stack) - 1] != '[':
                        return False
                elif ch == '}':
                    if stack[len(stack) - 1] != '{':
                        return False
                stack.pop()
        return len(stack) == 0
# @lc code=end

