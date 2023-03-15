/*
 * @lc app=leetcode.cn id=1615 lang=cpp
 *
 * [1615] 最大网络秩
 */

// @lc code=start
class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        int cnt[n];
        int g[n][n];
        memset(cnt, 0, sizeof(cnt));
        memset(g, 0, sizeof(g));
        for(auto& r : roads) {
            int a = r[0];
            int b = r[1];
            cnt[a]++;
            cnt[b]++;
            g[a][b] = g[b][a] = 1;
        }
        int ans = 0;
        for(int a = 0; a < n; a++) {
            for(int b = a+1; b < n; b++) {
                ans = max(ans, cnt[a] + cnt[b] - g[a][b]);
            }
        }
        return ans;
    }
};
// @lc code=end

