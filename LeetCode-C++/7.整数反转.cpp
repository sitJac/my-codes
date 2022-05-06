/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        std::reverse(s.begin(), s.end());
        int ans = 0;
        try {
            ans = stoi(s);
            if(x < 0) {
                ans = -ans;
            }
        }catch(exception ex){}
        return ans;
    }
};
// @lc code=end

