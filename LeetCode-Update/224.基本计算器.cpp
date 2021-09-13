/*
 * @lc app=leetcode.cn id=224 lang=cpp
 *
 * [224] 基本计算器
 */

// @lc code=start
class Solution {
public:
    int calculate(string s) {
        stack<char> ops;
        vector<string> tokens;
        long long val = 0;
        bool num_started = false;
        for (char ch : s){
            if(ch >= '0' and ch <= '9'){
                val = val*10 + ch - '0';
                num_started = true;
                continue;
            }
            else if(num_started){
                tokens.push_back(to_string(val));
                num_started = false;
                val = 0;
            }

            if(ch == ' ') continue;
            //处理运算符
            if (ch == ')'){
                while(ops.top() != '('){
                    tokens.push_back(string(1, ops.top()));
                    ops.pop();
                    continue;
                }
                ops.pop();
                continue;
            }
            while(!ops.empty() && getRank(ops.top()) >= getRank(ch)){
                tokens.push_back(string(1, ops.top()));
                ops.pop();
            }
            ops.push(ch);
        }
        if(num_started) tokens.push_back(to_string(val));
        while(!ops.empty()){
            tokens.push_back(string(1, ops.top()));
            ops.pop();
        }
        return evalRPN(tokens);
    }

    int getRank(char ch){
        if(ch == '+' || ch == '-') return 1;
        if(ch == '*' || ch == '/') return 2;
        return 0;
    }

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

