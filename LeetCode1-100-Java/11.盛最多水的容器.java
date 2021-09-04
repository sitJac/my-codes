/*
 * @lc app=leetcode.cn id=11 lang=java
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
class Solution {
    public int maxArea(int[] height) {
        int i = 0;
        int j = height.length-1;
        int result = 0;
        int area = 0;
        while(i <= j){
            if(height[i] <= height[j]){
                area = height[i] * (j-i);
                i++;
            }
            else{
                area = height[j] * (j-i);
                j--;
            }
            if(area > result){
                result = area;
            }    
        }
        return result;
    }
}
// @lc code=end

