/*
 * @lc app=leetcode.cn id=2185 lang=cpp
 *
 * [2185] 统计包含给定前缀的字符串
 */

// @lc code=start
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int result = 0;
        for(auto & word : words) {
            // // Solution 1: String.find()
            // if(word.find(pref) == 0) {
            //     result++;
            // }
            // Solution 2: String.compare()
            if(word.compare(0, pref.size(), pref, 0, pref.size()) == 0) {
                result++;
            }
        }
        return result;
    }
};
// @lc code=end

