/*
 * @lc app=leetcode.cn id=26 lang=java
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
class Solution {
    public int removeDuplicates(int[] nums) {
        int i = 0;
        int j = 0;
        while(j < nums.length){
            //if not duplicate, keep it, otherwise skip it
            if(i == 0 || nums[j] != nums[i - 1]){
                nums[i++] = nums[j++];
            }
            else{
                j++;
            }
        }
        //i is now in the length of the new array,[0,i) is what we want
        return i;
    }
}
// @lc code=end

