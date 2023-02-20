/*
 * @lc app=leetcode.cn id=2347 lang=cpp
 *
 * [2347] 最好的扑克手牌
 */

// @lc code=start
class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        bool isFlush = true;
        char c = suits[0];
        for(int i = 1; i < suits.size(); i++) {
            if(suits[i] != c) {
                isFlush = false;
            }
        }
        bool isThreeOfKind = false;
        bool isPair = false;
        unordered_map<int, int> mp;
        for(int i = 0; i < ranks.size(); i++) {
            mp[ranks[i]]++;
        }
        for(auto it: mp) {
            if(it.second >= 3) {
                isThreeOfKind = true;
            }
            if(it.second == 2) {
                isPair = true;
            }
        }
        if(isFlush) {
            return "Flush";
        }
        if(isThreeOfKind) {
            return "Three of a Kind";
        }
        if(isPair) {
            return "Pair";
        }
        return "High Card";
    }
};
// @lc code=end

