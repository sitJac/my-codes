/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }
        string str = to_string(x);
        string rev = str;
        std::reverse(rev.begin(), rev.end());
        if(str == rev) {
            return true;
        }
        else {
            return false;
        }
    }
};
// @lc code=end

