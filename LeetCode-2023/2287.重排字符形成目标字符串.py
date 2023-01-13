#
# @lc app=leetcode.cn id=2287 lang=python3
#
# [2287] 重排字符形成目标字符串
#

# @lc code=start
class Solution:
    def rearrangeCharacters(self, s: str, target: str) -> int:
        ans = inf
        cnt_s = Counter(s)
        for c, cnt in Counter(target).items():
            ans = min(ans, cnt_s[c] // cnt)
            if ans == 0:
                return 0
        return ans
# @lc code=end

