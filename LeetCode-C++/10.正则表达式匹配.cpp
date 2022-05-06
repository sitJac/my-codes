/*
 * @lc app=leetcode.cn id=10 lang=cpp
 *
 * [10] 正则表达式匹配
 */

// @lc code=start
class Solution {
public:
    bool isMatch(string s, string p) {
        if(regex_match(s,regex(p))) {
            return true;
        }
        return false;
    }
};
// @lc code=end

