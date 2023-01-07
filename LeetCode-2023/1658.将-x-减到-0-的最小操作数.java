/*
 * @lc app=leetcode.cn id=1658 lang=java
 *
 * [1658] 将 x 减到 0 的最小操作数
 */

// @lc code=start
class Solution {
    public int minOperations(int[] nums, int x) {
        if(x < 1) return -1;
        int sum = 0;
        for(int i = 0; i < nums.length; i++) {
            sum += nums[i];
        }
        int target = sum - x;

        int left = 0, right = 0;
        int now = 0;
        int result = -1;
        while(right < nums.length) {
            now += nums[right];
            if(now == target) {
                result = Math.max(result, right - left + 1);
            }
            while(now >= target && left <= right) {
                now -= nums[left];
                left++;
                if(now == target) {
                    result = Math.max(result, right - left + 1);
                }
            }
            right++;
        }
        return result > -1 ? nums.length - result : -1;
    }
}
// @lc code=end

