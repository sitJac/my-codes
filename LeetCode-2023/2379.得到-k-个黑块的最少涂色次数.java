/*
 * @lc app=leetcode.cn id=2379 lang=java
 *
 * [2379] 得到 K 个黑块的最少涂色次数
 */

// @lc code=start
class Solution {
    public int minimumRecolors(String blocks, int k) {
        int cnt = 0;
        for(int i = 0; i < k; i++) {
            if(blocks.charAt(i) == 'W') {
                cnt++;
            }
        }
        int ans = cnt;
        for(int i = k; i < blocks.length(); i++) {
            cnt += blocks.charAt(i) == 'W' ? 1 : 0;
            cnt -= blocks.charAt(i-k) == 'W' ? 1 : 0;
            ans = Math.min(ans, cnt);
        }
        return ans;
    }
}
// @lc code=end

