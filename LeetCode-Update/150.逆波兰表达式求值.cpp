/*
 * @lc app=leetcode.cn id=150 lang=cpp
 *
 * [150] 逆波兰表达式求值
 */

// @lc code=start
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> s;
        for (string& token : tokens){
            if(token == "+" || token == "-" || token == "*" || token == "/"){
                long long b = s.top();
                s.pop();
                long long a = s.top();
                s.pop();
                s.push(calc(a, b, token));
            }
            else{
                s.push(stoi(token));
            }
        } 
        return s.top();
    }

    long long calc(long long a, long long b, string op){
        if(op == "+") return a + b;
        if(op == "-") return a - b;
        if(op == "*") return a * b;
        if(op == "/") return a / b;
        return 0;
    }
};
// @lc code=end

