/*
 * @lc app=leetcode.cn id=2351 lang=java
 *
 * [2351] 第一个出现两次的字母
 */

// @lc code=start
class Solution {
    public char repeatedCharacter(String s) {
        Set<Character> seen = new HashSet<Character>();
        for(int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if(!seen.add(c)) {
                return c;
            }
        }
        return ' ';
    }
}
// @lc code=end

