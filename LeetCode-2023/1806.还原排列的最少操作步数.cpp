/*
 * @lc app=leetcode.cn id=1806 lang=cpp
 *
 * [1806] 还原排列的最少操作步数
 */

// @lc code=start
class Solution {
public:
    int reinitializePermutation(int n) {
        vector<int> perm(n);
        vector<int> target(n);
        iota(perm.begin(), perm.end(), 0);
        iota(target.begin(), target.end(), 0);
        int ans = 0;
        while(true) {
            vector<int> arr(n);
            for(int i = 0; i < n; i++) {
                if(i & 1) arr[i] = perm[n / 2 + (i - 1) / 2];
                else arr[i] = perm[i / 2];
            }
            perm = move(arr);
            ans++;
            if(perm == target) break;
        }
        return ans;
    }
};
// @lc code=end

