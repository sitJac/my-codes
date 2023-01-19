/*
 * @lc app=leetcode.cn id=2299 lang=java
 *
 * [2299] 强密码检验器 II
 */

// @lc code=start
class Solution {
    public boolean strongPasswordCheckerII(String password) {
        if(password.length() < 8) {
            return false;
        }
        int n = password.length();
        Set<Character> specials = new HashSet<Character>() {
            {
                add('!');
                add('@');
                add('#');
                add('$');
                add('%');
                add('^');
                add('&');
                add('*');
                add('(');
                add(')');
                add('-');
                add('+');
            }
        };
        boolean hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
        for(int i = 0; i < n; i++) {
            if(i != n-1 && password.charAt(i) == password.charAt(i+1)) {
                return false;
            }
            char ch = password.charAt(i);
            if(Character.isUpperCase(ch)) {
                hasUpper = true;
            } else if(Character.isLowerCase(ch)) {
                hasLower = true;
            } else if(Character.isDigit(ch)) {
                hasDigit = true;
            } else if(specials.contains(ch)) {
                hasSpecial = true;
            }
        }
        return hasDigit && hasLower && hasUpper && hasSpecial;
    }
}
// @lc code=end

