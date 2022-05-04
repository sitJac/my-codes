/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int ans = 0;
        for(int i = 0; i < s.size(); i++) {
            unordered_map<char, int> seen;
            int j = i;
            while(j < n && seen[s[j]] == 0) {
                seen[s[j]] = 1;
                j++;
            }
            ans = max(ans, j - i);
        }
        return ans;
    }
};
// @lc code=end

