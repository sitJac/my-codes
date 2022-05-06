/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i = 0;
        while(s[i] == ' ' && i < n) {
            i++;
        }
        if(i == n) {
            return 0;
        }
        bool is_negtive = false;
        if(s[i] == '-' || s[i] == '+') {
            is_negtive = s[i] == '-';
            i++;
        }
        long ans = 0;
        while(i < n && isdigit(s[i])) {
            ans = ans * 10 + (s[i] - '0');
            if(is_negtive && -ans < INT_MIN) {
                return INT_MIN;
            }
            if(!is_negtive && ans > INT_MAX) {
                return INT_MAX;
            }
            i++;
        }
        return is_negtive ? -ans : ans;
    }
};
// @lc code=end

