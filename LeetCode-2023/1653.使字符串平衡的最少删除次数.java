/*
 * @lc app=leetcode.cn id=1653 lang=java
 *
 * [1653] 使字符串平衡的最少删除次数
 */

// @lc code=start
class Solution {
    public int minimumDeletions(String s) {
        int leftb = 0, righta = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s.charAt(i) == 'a') {
                righta++;
            }
        }
        int result = righta;
        for(int i = 0; i < s.length(); i++) {
            if(s.charAt(i) == 'a') {
                righta--;
            } else {
                leftb++;
            }
            result = Math.min(result, leftb + righta);
        }
        return result;
    }
}
// @lc code=end

