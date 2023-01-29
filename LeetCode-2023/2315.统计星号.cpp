/*
 * @lc app=leetcode.cn id=2315 lang=cpp
 *
 * [2315] 统计星号
 */

// @lc code=start
class Solution {
public:
    int countAsterisks(string s) {
        bool flag = true;
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if(s[i] == '|') {
                flag = !flag;
            }
            if(flag == true && s[i] == '*') {
                count++;
            }
        }
        return count;
    }
};
// @lc code=end

