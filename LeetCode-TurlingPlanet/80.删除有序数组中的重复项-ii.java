/*
 * @lc app=leetcode.cn id=80 lang=java
 *
 * [80] 删除有序数组中的重复项 II
 */

// @lc code=start
class Solution {
        public int removeDuplicates(int[] nums) {
        int left = 0;
        for (int right = 0; right < nums.length; right++) {
            if (left < 2 || nums[right] != nums[left - 2])
                nums[left++] = nums[right];
        }
        return left;
    }
}
// @lc code=end

