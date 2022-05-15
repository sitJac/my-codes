/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result = 0;
        unordered_map<int, int> hash;
        for(int i = 0, j = 0; j < s.size(); j++) {
            hash[s[j] - 'a']++;
            while(hash[s[j] - 'a'] > 1) {
                hash[s[i] - 'a']--;
                i++;
            }
            result = max(result, j+1-i);
        }
        return result;
    }
};
// @lc code=end

