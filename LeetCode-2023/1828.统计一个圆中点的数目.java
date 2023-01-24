/*
 * @lc app=leetcode.cn id=1828 lang=java
 *
 * [1828] 统计一个圆中点的数目
 */

// @lc code=start
class Solution {
    public int[] countPoints(int[][] points, int[][] queries) {
        int m = points.length;
        int n = queries.length;
        int[] ans = new int[n];
        for(int i = 0; i < n; i++) {
            int cx = queries[i][0];
            int cy = queries[i][1];
            int cr = queries[i][2];
            for(int j = 0; j < m; j++) {
                int px = points[j][0];
                int py = points[j][1];
                if((cx - px) * (cx - px) + (cy - py) * (cy - py) <= cr * cr) {
                    ans[i]++;
                }
            }
        }
        return ans;
    }
}
// @lc code=end

