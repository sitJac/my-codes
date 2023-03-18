/*
 * @lc app=leetcode.cn id=2389 lang=cpp
 *
 * [2389] 和有限的最长子序列
 */

// @lc code=start
class Solution {
public:
        int binarySearch(vector<int>& f, int target) {
        int low = 1, high = f.size();
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (f[mid] > target) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }

    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        int m = queries.size();
        vector<int> answer(m);
        vector<int> f(n + 1);
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            f[i + 1] = f[i] + nums[i];
        }
        for (int i = 0; i < m; i++) {
            answer[i] = binarySearch(f, queries[i]) - 1;
        }
        return answer;
    }
};
// @lc code=end

