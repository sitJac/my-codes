#
# @lc app=leetcode.cn id=2347 lang=python3
#
# [2347] 最好的扑克手牌
#

# @lc code=start
class Solution:
    def bestHand(self, ranks: List[int], suits: List[str]) -> str:
        if len(set(suits)) == 1:
            return "Flush"
        mp = Counter(ranks)
        if len(mp) == 5:
            return "High Card"
        for [k, v] in mp.items():
            if v > 2:
                return "Three of a Kind"
        return "Pair"
# @lc code=end

