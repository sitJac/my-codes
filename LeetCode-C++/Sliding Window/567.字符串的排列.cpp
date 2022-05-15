/*
 * @lc app=leetcode.cn id=567 lang=cpp
 *
 * [567] 字符串的排列
 */

// @lc code=start
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l1 = s1.size();
        int l2 = s2.size();
        vector<int> c1(26, 0);
        vector<int> c2(26, 0);
        for(int i = 0; i < l1; i++) {
            c1[s1[i] - 'a']++;
        }
        for(int i = 0; i < l2; i++) {
            if(i >= l1) {
                c2[s2[i-l1] - 'a']--;
            }
            c2[s2[i] - 'a']++;
            if(c1 == c2) {
                return true;
            }
        }
    return false;
    }
};
// @lc code=end

