/*
 * @lc app=leetcode.cn id=38 lang=java
 *
 * [38] 外观数列
 */

// @lc code=start
class Solution {
    public String countAndSay(int n) {
        if (n == 2) return "11";
        if (n == 1) return "1";
        int count = 1;
        String s = countAndSay(n - 1);
        StringBuilder sb = new StringBuilder();
        char c = s.charAt(0);
        for (int i = 1; i < s.length(); i++) {
            if (s.charAt(i) == c) {
                count++;
            }else{
                sb.append(count).append(c);
                c = s.charAt(i);
                count = 1;
            }
            if (i == s.length() - 1) {
                sb.append(count).append(c);
            }
        }
        return sb.toString();
    }
}  
// @lc code=end

