/*
 * @lc app=leetcode.cn id=2283 lang=java
 *
 * [2283] 判断一个数的数字计数是否等于数位的值
 */

// @lc code=start
class Solution {
    public boolean digitCount(String num) {
        Map<Integer, Integer> h = new HashMap<Integer, Integer>();
        int n = num.length();
        for(int i = 0; i < n; i++) {
            int digit = num.charAt(i) - '0';
            h.put(digit, h.getOrDefault(digit, 0) + 1);
        }
        for(int i = 0; i < n; i++) {
            int v = num.charAt(i) - '0';
            if(h.getOrDefault(i, 0) != v) {
                return false;
            }
        }
        return true;
    }
}
// @lc code=end

