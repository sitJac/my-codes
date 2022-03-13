/*
 * @lc app=leetcode.cn id=42 lang=java
 *
 * [42] 接雨水
 */

// @lc code=start
class Solution {
    public int trap(int[] height) {
        if (height == null || height.length <= 2) {
            return 0;
        }
        int len = height.length;

        //分别记录元素左边和右边的最大值
        int[] leftMax = new int[len];
        int[] rightMax = new int[len];

        //最左边元素左边的最大值
        leftMax[0] = height[0];
        //最右边元素右边的最大值
        rightMax[len - 1] = height[len - 1];

        for (int i = 1; i < len; i++) {
            leftMax[i] = Math.max(leftMax[i - 1], height[i]);
        }

        for (int i = len - 2; i >= 0; i--) {
            rightMax[i] = Math.max(rightMax[i + 1], height[i]);
        }

        int area = 0;
        for (int i = 1; i < len - 1; i++) {
            area += Math.min(leftMax[i], rightMax[i]) - height[i];
        }

        return area;
    }
}
// @lc code=end

