/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        unordered_map<char, char> pairs = {
            {')','('},
            {']','['},
            {'}','{'}
        };
        if(n%2 ==1){
            return false;
        }
        stack<char> stk;
        for(char ch:s){
            if(pairs.count(ch)){
                if(stk.empty() || stk.top() != pairs[ch]){
                    return false;
                }
                stk.pop();
            }
            else{
                stk.push(ch);
            }
        }
        return stk.empty();
    }
};
// @lc code=end

