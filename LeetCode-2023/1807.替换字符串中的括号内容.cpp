/*
 * @lc app=leetcode.cn id=1807 lang=cpp
 *
 * [1807] 替换字符串中的括号内容
 */

// @lc code=start
class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> key_value;
        for(auto kv: knowledge) {
            key_value[kv[0]] = kv[1];
        }
        string result = "";
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                string key = "";
                int j = i + 1;
                while(s[j] !=')') {
                    key += s[j];
                    j++;
                }
                if(key_value.count(key) > 0) {
                    result += key_value[key];
                } else {
                    result += "?";
                }
                i = j;
            } else {
                result += s[i];
            }
        }
        return result;
    }
};
// @lc code=end

