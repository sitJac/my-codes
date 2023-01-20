#
# @lc app=leetcode.cn id=1817 lang=python3
#
# [1817] 查找用户活跃分钟数
#

# @lc code=start
class Solution:
    def findingUsersActiveMinutes(self, logs: List[List[int]], k: int) -> List[int]:
        mp = defaultdict(set)
        for i, t in logs:
            mp[i].add(t)
        ans = [0] * k
        for s in mp.values():
            ans[len(s) - 1] += 1
        return ans
# @lc code=end

