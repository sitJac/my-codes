/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        int ans;
        ans = exp(0.5*log(x));
        return ((long long)(ans + 1) * (ans + 1) <= x ? ans + 1 : ans);

    }
};
// @lc code=end

