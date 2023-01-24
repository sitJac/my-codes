#
# @lc app=leetcode.cn id=1828 lang=python3
#
# [1828] 统计一个圆中点的数目
#

# @lc code=start
class Solution:
    def countPoints(self, points: List[List[int]], queries: List[List[int]]) -> List[int]:
        ans = [0] * len(queries)
        for i, (cx, cy, cr) in enumerate(queries):
            for (px, py) in points:
                if (cx - px) ** 2 + (cy - py) ** 2 <= cr ** 2 :
                    ans[i] += 1
        return ans
# @lc code=end

