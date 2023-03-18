/*
 * @lc app=leetcode.cn id=2389 lang=java
 *
 * [2389] 和有限的最长子序列
 */

// @lc code=start
class Solution {
    public int binarySearch(int[] f, int target) {
        int low = 1, high = f.length;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (f[mid] > target) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
    public int[] answerQueries(int[] nums, int[] queries) {
        int n = nums.length;
        int m = queries.length;
        int[] answer = new int[m];
        int[] f = new int[n + 1];
        Arrays.sort(nums);
        for (int i = 0; i < n; i++) {
            f[i + 1] = f[i] + nums[i];
        }
        for (int i = 0; i < m; i++) {
            answer[i] = binarySearch(f, queries[i]) - 1;
        }
        return answer;
    }
}
// @lc code=end

