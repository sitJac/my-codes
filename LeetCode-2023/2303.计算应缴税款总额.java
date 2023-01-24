/*
 * @lc app=leetcode.cn id=2303 lang=java
 *
 * [2303] 计算应缴税款总额
 */

// @lc code=start
class Solution {
    public double calculateTax(int[][] brackets, int income) {
        double totalTax = 0;
        int lower = 0;
        for(int[] bracket : brackets) {
            int upper = bracket[0];
            int percent = bracket[1];
            int tax = (Math.min(income, upper) - lower) * percent;
            totalTax += tax;
            lower = upper;
        }
        return (double) totalTax / 100;
    }
}
// @lc code=end

