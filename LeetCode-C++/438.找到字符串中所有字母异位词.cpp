/*
 * @lc app=leetcode.cn id=438 lang=cpp
 *
 * [438] 找到字符串中所有字母异位词
 */

// @lc code=start
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n1 = s.size();
        int n2 = p.size();
        vector<int> vs(26, 0);
        vector<int> vp(26, 0);
        vector<int> res;
        for (char c : p) {
            vp[c - 'a']++;
        }
        for(int i = 0; i < n1; i++) {
            if (i >= n2) {
                vs[s[i - n2] - 'a']--;
            }
            vs[s[i] - 'a']++;
            if (vs == vp) {
                res.push_back(i - n2 + 1);
            }
        }
        return res;
    }
};
// @lc code=end

