/*
 * @lc app=leetcode.cn id=2299 lang=cpp
 *
 * [2299] 强密码检验器 II
 */

// @lc code=start
class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if(password.size() < 8) {
            return false;
        }
        bool hasLower = false, hasUpper = false, hasDigit = false, hasSpecials = false;
        int n = password.size();
        unordered_set<char> specials= {'!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '+'};
        for(int i = 0; i < n; i++) {
            char ch = password[i];
            if(i != n - 1 && password[i] == password[i+1]) {
                return false;
            }
            else if(islower(ch)) {
                hasLower = true;
            }
            else if(isupper(ch)) {
                hasUpper = true;
            }
            else if(isdigit(ch)) {
                hasDigit = true;
            }
            else if(specials.count(ch)) {
                hasSpecials = true;
            }
        }
        return hasLower && hasDigit && hasUpper && hasSpecials;

    }
};
// @lc code=end

