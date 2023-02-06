/*
 * @lc app=leetcode.cn id=2325 lang=java
 *
 * [2325] 解密消息
 */

// @lc code=start
class Solution {
    public String decodeMessage(String key, String message) {
        char cur = 'a';
        Map<Character, Character> rules = new HashMap<Character, Character>();

        for (int i = 0; i < key.length(); ++i) {
            char c = key.charAt(i);
            if (c != ' ' && !rules.containsKey(c)) {
                rules.put(c, cur);
                ++cur;
            }
        }

        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < message.length(); ++i) {
            char c = message.charAt(i);
            if (c != ' ') {
                c = rules.get(c);
            }
            sb.append(c);
        }

        return sb.toString();
    }
}
// @lc code=end

