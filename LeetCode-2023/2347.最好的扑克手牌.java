/*
 * @lc app=leetcode.cn id=2347 lang=java
 *
 * [2347] 最好的扑克手牌
 */

// @lc code=start
class Solution {
    public String bestHand(int[] ranks, char[] suits) {
        boolean isFlush = true;
        char c = suits[0];
        for(int i = 1; i < suits.length; i++) {
            if(suits[i] != c) {
                isFlush = false;
                break;
            }
        }
        boolean isThreeOfAKind = false;
        boolean isPair = false;
        Map<Integer, Integer> mp = new HashMap<Integer, Integer>();
        for(int i = 0; i < ranks.length; i++) {
            mp.put(ranks[i], mp.getOrDefault(ranks[i], 0) + 1);
        }
        for(Integer k: mp.keySet()) {
            if(mp.get(k) >= 3) {
                isThreeOfAKind = true;
                break;
            }
            if(mp.get(k) == 2) {
                isPair = true;
            }
        }
        if(isFlush) {
            return "Flush";
        }
        if(isThreeOfAKind) {
            return "Three of a Kind";
        }
        if(isPair) {
            return "Pair";
        }
        return "High Card";
    }
}
// @lc code=end

