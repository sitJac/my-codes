#
# @lc app=leetcode.cn id=1616 lang=python3
#
# [1616] 分割两个字符串得到回文串
#

# @lc code=start
class Solution:
    def isPalindrome(self, s: str, i: int, j: int) -> bool:
        while i < j:
            if s[i] != s[j]:
                return False
            i += 1
            j -= 1
        return True

    def checkPalindromeFormation(self, a: str, b: str) -> bool:
        n = len(a)
        if n == 0:
            return True

        i, j = 0, n - 1
        while i < j and a[i] == b[j]:
            i += 1
            j -= 1
        if self.isPalindrome(a, i, j) or self.isPalindrome(b, i, j):
            return True

        i, j = 0, n - 1
        while i < j and b[i] == a[j]:
            i += 1
            j -= 1
        if self.isPalindrome(a, i, j) or self.isPalindrome(b, i, j):
            return True

        return False

# @lc code=end

