/*
 * @lc app=leetcode.cn id=2351 lang=cpp
 *
 * [2351] 第一个出现两次的字母
 */

// @lc code=start
class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> seen;
        for(char c : s) {
            if(seen.count(c)) {
                return c;
            } else {
                seen.insert(c);
            }
        }
        return ' ';
    }
};
// @lc code=end

