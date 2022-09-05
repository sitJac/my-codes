#include<bits/stdc++.h>
using namespace std;

bool isValid(string str) {
    stack<char> sta;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '(') {
            sta.push(')');
        }
        if(str[i] == '{') {
            sta.push('}');
        }
        if(str[i] == '[') {
            sta.push(']');
        }
        if(sta.empty()) {
            return false;
        }
        if(sta.top() == str[i]) {
            sta.pop();
        }
    }
    return sta.empty();
}

int main() {
    string str;
    while(cin >> str) {
        if(isValid(str)) {
            cout << "Valid!" << endl;
        }
        else {
            cout << "Invalid!" << endl;
        }
    }
    return 0;
}