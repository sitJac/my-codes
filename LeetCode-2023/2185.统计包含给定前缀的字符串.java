/*
 * @lc app=leetcode.cn id=2185 lang=java
 *
 * [2185] 统计包含给定前缀的字符串
 */

// @lc code=start
class Solution {
    public int prefixCount(String[] words, String pref) {
        int result = 0;
        for(String word : words) {
            // // Solution 1: use indexOf
            // if(word.indexOf(pref) == 0) {
            //     result++;
            // }
            // Solution 2: use startsWith
            if(word.startsWith(pref)) {
                result++;
            }
        }
        return result;
    }
}
// @lc code=end

