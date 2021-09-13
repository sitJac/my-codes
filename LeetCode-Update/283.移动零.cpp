/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[n] = nums[i];
                n++;
            }
        }
        while (n < nums.size())
        {
            nums[n] = 0;
            n++;
        }
        

    }
};
// @lc code=end

