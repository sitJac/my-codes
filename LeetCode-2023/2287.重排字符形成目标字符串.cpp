/*
 * @lc app=leetcode.cn id=2287 lang=cpp
 *
 * [2287] 重排字符形成目标字符串
 */

// @lc code=start
class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char, int> sCount, targetCount;
        int n = s.size();
        int m = target.size();
        for(int i = 0; i < m; i++) {
            targetCount[target[i]]++;
        }
        for(int i = 0; i < n; i++) {
            if(targetCount.count(s[i])) {
                sCount[s[i]]++;
            }
        }
        int ans = INT_MAX;
        for (auto &[c, count] : targetCount) {
            int totalCount = sCount[c];
            ans = min(ans, totalCount / count);
            if(ans == 0) {
                return 0;
            }
        }
        return ans;
    }
};
// @lc code=end

