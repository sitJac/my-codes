/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        auto getLen = [&](int l, int r) {
            while(l >= 0 && r < n && s[l] == s[r]) {
                l--;
                r++;
            }
            return r-1-l;
        };
        int len = 0;
        int start = 0;
        for(int i = 0; i < n; i++) {
            int cur = max(getLen(i, i), getLen(i, i+1));
            if(cur > len) {
                len = cur;
                start = i - (len - 1) / 2;
            }
        }
        return s.substr(start, len);
    }
};
// @lc code=end

