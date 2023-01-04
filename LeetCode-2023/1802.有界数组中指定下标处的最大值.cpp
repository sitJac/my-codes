/*
 * @lc app=leetcode.cn id=1802 lang=cpp
 *
 * [1802] 有界数组中指定下标处的最大值
 */

// @lc code=start
class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        int left = 1;
        int right = maxSum;
        while (left < right) {
            int mid = (left + right + 1) / 2;
            if(valid(mid, n, index, maxSum)) {
                left = mid;
            } else {
                right = mid - 1;
            }
        }
        return left;
    }

    bool valid(int mid, int n, int index, int maxSum) {
        int left = index;
        int right = n - index - 1;
        return cal(mid, left) + cal(mid, right) + mid <= maxSum;
    }

    long cal(int big, int length) {
        if(length + 1 < big) {
            int small = big - length;
            return (long) (small + big - 1) * length / 2;
        } else {
            int ones = length - big + 1;
            return (long) (big - 1) * big / 2 + ones;
        }
    }
};
// @lc code=end

