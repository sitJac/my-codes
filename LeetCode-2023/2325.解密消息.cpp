/*
 * @lc app=leetcode.cn id=2325 lang=cpp
 *
 * [2325] 解密消息
 */

// @lc code=start
class Solution {
public:
    string decodeMessage(string key, string message) {
        char cur = 'a';
        unordered_map<char, char> mp;
        for(char c : key) {
            if(c != ' ' && !mp.count(c)) {
                mp[c] = cur++;
            }
        }
        for(char &c : message) {
            if(c != ' ') {
                c = mp[c];
            }
        }
        return message;
    }
};
// @lc code=end

