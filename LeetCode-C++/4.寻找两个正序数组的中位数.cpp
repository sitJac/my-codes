/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge_nums;
        for(int i = 0; i < nums1.size(); i++) {
            merge_nums.push_back(nums1[i]);
        }
        for(int i = 0; i < nums2.size(); i++) {
            merge_nums.push_back(nums2[i]);
        }
        sort(merge_nums.begin(), merge_nums.end());
        int len = merge_nums.size();
        double ans;
        if(len % 2 == 0) {
            ans = ((merge_nums[len/2] + merge_nums[(len/2)-1])/2.0);
        }
        else {
            ans = merge_nums[(len-1)/2];
        }
        return ans;
    }
};
// @lc code=end

