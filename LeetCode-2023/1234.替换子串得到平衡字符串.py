#
# @lc app=leetcode.cn id=1234 lang=python3
#
# [1234] 替换子串得到平衡字符串
#

# @lc code=start
class Solution:
    def balancedString(self, s: str) -> int:
        cnt = Counter(s)
        partial = len(s) // 4

        def check():
            if cnt['Q'] > partial or \
                    cnt['W'] > partial or \
                    cnt['E'] > partial or \
                    cnt['R'] > partial:
                return False
            return True

        if check():
            return 0

        res = len(s)
        r = 0
        for l, c in enumerate(s):
            while r < len(s) and not check():
                cnt[s[r]] -= 1
                r += 1
            if not check():
                break
            res = min(res, r - l)
            cnt[c] += 1
        return res
# @lc code=end

