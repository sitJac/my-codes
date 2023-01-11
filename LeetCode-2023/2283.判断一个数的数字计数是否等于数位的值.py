#
# @lc app=leetcode.cn id=2283 lang=python3
#
# [2283] 判断一个数的数字计数是否等于数位的值
#

# @lc code=start
class Solution:
    def digitCount(self, num: str) -> bool:
        h = Counter(num)
        for idx, v in enumerate(num):
            if h[str(idx)] != int(v):
                return False
        return True
# @lc code=end

