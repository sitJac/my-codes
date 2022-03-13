/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = 0;
        for (int i = 0; i < nums.size(); i++){
            if(i == 0 || nums[i] != nums[i-1]){
                nums[n] = nums[i];
                n++;
            }
        }
        return n;
    }
};
// @lc code=end

