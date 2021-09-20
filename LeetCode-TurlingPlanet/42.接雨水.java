/*
 * @lc app=leetcode.cn id=42 lang=java
 *
 * [42] 接雨水
 */

// @lc code=start
class Solution {
    public int trap(int[] height) {
        int sum = 0;
        for(int i = 1; i < height.length-1; i++){
            int max_left = 0;
            for(int j = i - 1; j >= 0; j--){
                max_left = Math.max(max_left, height[j]);
            }
            int max_right = 0;
            for(int j = i+1; j < height.length; j++){
                max_right = Math.max(max_right, height[j]);
            }
            int min = Math.min(max_right, max_left);
            if(min > height[i]){
                sum = sum + min-height[i];
            }
        }
        return sum;
    }
}
// @lc code=end

