/*
 * @lc app=leetcode.cn id=2315 lang=java
 *
 * [2315] 统计星号
 */

// @lc code=start
class Solution {
    public int countAsterisks(String s) {
        boolean flag = true;
        int count = 0;
        for(int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if(c == '|') {
                flag = !flag;
            }
            if(flag == true && c == '*') {
                count ++;
            }
        }
        return count;
    }
}
// @lc code=end

