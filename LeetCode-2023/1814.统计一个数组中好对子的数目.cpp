/*
 * @lc app=leetcode.cn id=1814 lang=cpp
 *
 * [1814] 统计一个数组中好对子的数目
 */

// @lc code=start
class Solution {
public:
    int revFunc(int num) {
        int rev = 0;
        while(num) {
            rev = rev * 10 + num % 10;
            num = num / 10;
        }
        return rev;
    }
    int countNicePairs(vector<int>& nums) {
        int mod = 1e9 + 7;
        long result = 0;
        int n = nums.size();
        unordered_map<int, long> mp;
        for(int i = 0; i < n; i++) {
            mp[nums[i] - revFunc(nums[i])]++;
        }
        for(auto it : mp) {
            result += (it.second * (it.second - 1) / 2) % mod;
        }
        return (int)result % mod;
    }``
};
// @lc code=end

