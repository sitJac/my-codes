/*
 * @lc app=leetcode.cn id=1615 lang=java
 *
 * [1615] 最大网络秩
 */

// @lc code=start
class Solution {
    public int maximalNetworkRank(int n, int[][] roads) {
        int cnt[] = new int[n];
        int g[][] = new int[n][n];
        for(var r : roads) {
            int a = r[0];
            int b = r[1];
            cnt[a]++;
            cnt[b]++;
            g[a][b] = g[b][a] = 1;
        }
        int ans = 0;
        for(int a = 0; a < n; a++) {
            for(int b = a + 1; b < n; b++) {
                ans = Math.max(ans, cnt[a] + cnt[b] - g[a][b]);
            }
        }
        return ans;
    }
}
// @lc code=end

