/*
 * @lc app=leetcode.cn id=11 lang=java
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
class Solution {
    public int maxArea(int[] height) {
        int i = 0;
        int j = height.length - 1;
        int ans = 0;
        while(i < j){
            int area = Math.min(height[i], height[j])*(j - i);
            ans = Math.max(area, ans);
            if(height[i] >= height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
}
// @lc code=end

