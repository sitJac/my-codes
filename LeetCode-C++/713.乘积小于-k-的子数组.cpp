/*
 * @lc app=leetcode.cn id=713 lang=cpp
 *
 * [713] 乘积小于 K 的子数组
 */

// @lc code=start
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans = 0, left = 0, right = 0, product = 1;
        while (right < nums.size()) {
            product *= nums[right];
            while (product >= k && left <= right) {
                product /= nums[left++];
            }
            ans += right - left + 1;
            right++;
        }
        return ans;
    }
};
// @lc code=end

