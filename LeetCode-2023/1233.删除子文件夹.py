#
# @lc app=leetcode.cn id=1233 lang=python3
#
# [1233] 删除子文件夹
#

# @lc code=start
class Solution:
    def removeSubfolders(self, folder: List[str]) -> List[str]:
        folder.sort()
        ans = [folder[0]]
        for i in range(1, len(folder)):
            if not ((pre := len(ans[-1])) < len(folder[i]) and ans[-1] == folder[i][:pre] and folder[i][pre] == "/"):
                ans.append(folder[i])
        return ans
# @lc code=end

