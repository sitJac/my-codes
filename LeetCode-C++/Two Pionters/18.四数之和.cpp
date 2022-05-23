/*
 * @lc app=leetcode.cn id=18 lang=cpp
 *
 * [18] 四数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int> > fourSum(vector<int>& nums, int target) {
        vector<vector<int> > res;
        if (nums.size() < 4) return res;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 3; i++) {
            for (int j = i + 1; j < n - 2; j++) {
                int k = j + 1;
                int l = n - 1;
                while (k < l) {
                    long sum = (long)nums[i] + nums[j] + nums[k] + nums[l];
                    vector<int> quadruplets = {nums[i], nums[j], nums[k],nums[l]};
                    if (sum == target) {
                        res.push_back(quadruplets);
                        while (k < n && quadruplets[2] == nums[k])
                            k++;
                        while (l > 0 && quadruplets[3] == nums[l])
                            l--;
                    }
                    else if (sum < target)
                        k++;
                    else
                        l--;
                }
                while (j < n - 2 && nums[j] == nums[j + 1]) 
                    j++;
            }
            while (i < n - 3 && nums[i] == nums[i + 1])
                i++;
        }
        return res;
    }
};
// @lc code=end

