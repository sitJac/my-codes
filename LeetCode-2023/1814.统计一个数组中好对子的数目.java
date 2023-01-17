/*
 * @lc app=leetcode.cn id=1814 lang=java
 *
 * [1814] 统计一个数组中好对子的数目
 */

// @lc code=start
class Solution {
    public int revFunc(int num) {
        int rev = 0;
        while(num != 0) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        return rev;
    }
    public int countNicePairs(int[] nums) {
        int result = 0;
        int n = nums.length;
        int mod = 1000000007;
        Map<Integer, Integer> mp = new HashMap<>();
        for(int i = 0; i < n; i++) {
            mp.put(nums[i] - revFunc(nums[i]), mp.getOrDefault(nums[i] - revFunc(nums[i]), 0) + 1);
        }
        for(Map.Entry<Integer, Integer> entry : mp.entrySet()) {
            int val = entry.getValue();
            result += ((long)val * (val - 1) / 2) % mod;    // avoid overflow
        }
        return result % mod;
    }
}
// @lc code=end

