/*
 * @lc app=leetcode.cn id=2180 lang=java
 *
 * [2180] 统计各位数字之和为偶数的整数个数
 */

// @lc code=start
class Solution {
    public int countEven(int num) {
        int cnt = 0;
        for(int i = 1; i <= num; i++) {
            int sum = 0;
            int x = i;
            while(x != 0) {
                sum += x % 10;
                x /= 10;
            }
            if(sum % 2 == 0) {
                cnt++;
            }
        }
        return cnt;
    }
}
// @lc code=end

