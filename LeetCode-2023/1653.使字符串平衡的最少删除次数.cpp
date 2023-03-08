/*
 * @lc app=leetcode.cn id=1653 lang=cpp
 *
 * [1653] 使字符串平衡的最少删除次数
 */

// @lc code=start
class Solution {
public:
    int minimumDeletions(string s) {
        int leftb = 0, righta = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'a') {
                righta++;
            }
        }
        int result = righta;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'a') {
                righta--;
            } else {
                leftb++;
            }
            result = min(result, leftb + righta);
        }
        return result;
    }
};
// @lc code=end

