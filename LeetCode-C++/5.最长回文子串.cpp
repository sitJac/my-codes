/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        if(rev == s) {
            return true;
        }
        else {
            return false;
        }
    }
    string longestPalindrome(string s) {
        int n = s.size();
        string res;
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                if(isPalindrome(s.substr(i, j+1)) && j+1-i > res.size()) {
                    res = s.substr(i, j+1);
                }
            }
        }
        return res;
    }
};
// @lc code=end

