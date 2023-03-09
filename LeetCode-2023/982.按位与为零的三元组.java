/*
 * @lc app=leetcode.cn id=982 lang=java
 *
 * [982] 按位与为零的三元组
 */

// @lc code=start
class Solution {
    public int countTriplets(int[] nums) {
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            for (int j = i; j < nums.length; j++) {
                for (int k = j; k < nums.length; k++) {
                    if((nums[i] & nums[j] & nums[k]) == 0){
                        if(i == j && j == k) {
                            count += 1;
                        } else if (i == j || i == k || j == k) {
                            count += 3;
                        } else {
                            count += 6;
                        }
                    }
                }
            }
        }
        return count;
    }
}
// @lc code=end

