/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        for(int i = 0; i < n; i++) {
            if(i && nums[i] == nums[i-1]) continue;
            int j = i + 1;
            int k = n - 1;
            while(j < k) {
                if(nums[j] + nums[k] > -nums[i]) {
                    k--;
                }
                else if(nums[j] + nums[k] < -nums[i]) {
                    j++;
                }
                else {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    while(j < k && nums[j] == nums[j+1]) {
                        j++;
                    }
                    while(j < k && nums[k] == nums[k-1]) {
                        k--;
                    }
                    j++;
                    k--;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

