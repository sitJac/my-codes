#include<bits/stdc++.h>
using namespace std;

void Judge(string s){
    stack<char> brackets;
    bool flag = false;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            brackets.push(s[i]);
        }
        else if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
            if(brackets.empty()){
                cout << "no" << endl;
                return ;
            }
            if(s[i] == ')' && brackets.top() == '('){
                brackets.pop();
            }
            else if(s[i] == ']' && brackets.top() == '['){
                brackets.pop();
            }
            else if(s[i] == '}' && brackets.top() == '{'){
                brackets.pop();
            }
        }
    }
    if(brackets.empty()){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
}

int main(){
    int n;
    cin >> n;
    while(n--){
        string str;
        cin >> str;
        Judge(str);
    }
    return 0;
}