/*
 * @lc app=leetcode.cn id=1658 lang=cpp
 *
 * [1658] 将 x 减到 0 的最小操作数
 */

// @lc code=start
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        if(x < 1) return -1;
        int sum = 0;
        for(auto &a : nums) sum += a;
        int target = sum - x;

        int left = 0, right = 0;
        int now = 0;
        int result = -1;
        while(right < nums.size()) {
            now += nums[right];
            if(now == target) result = max(result, right - left + 1);
            while(now >= target && left <= right) {
                now -= nums[left];
                left++;
                if(now == target) result = max(result, right - left + 1);
            }
            right++;
        }
        return result > -1 ? nums.size() - result : -1;

    }
};
// @lc code=end

