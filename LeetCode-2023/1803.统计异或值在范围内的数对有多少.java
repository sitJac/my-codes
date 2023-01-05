/*
 * @lc app=leetcode.cn id=1803 lang=java
 *
 * [1803] 统计异或值在范围内的数对有多少
 */

// @lc code=start
class Solution {
    public int countPairs(int[] nums, int low, int high) {
        Arrays.sort(nums);
        int n = nums.length;
        int ans = 0;
        int tmp = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                tmp = nums[i] ^ nums[j];
                if(tmp >= low && tmp <= high) {
                    ans++;
                }
            }
        }
        return ans;
    }
}
// @lc code=end

