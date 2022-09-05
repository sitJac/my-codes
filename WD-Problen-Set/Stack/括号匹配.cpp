#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while (cin >> str)
    {
        stack<int> brackets;
        string answer(str.size(),' ');  //初始化为空字符串
        for (int i = 0; i < str.size(); i++)
        {
            if(str[i] == '(')
            {
                brackets.push(i);
            }
            else if(str[i] == ')')
            {
                if(!brackets.empty())
                {
                    brackets.pop();
                }
                else
                    answer[i] = '?';
            }
        }
        while (!brackets.empty())
        {
            answer[brackets.top()] = '$';
            brackets.pop();
        }
        cout << str << endl;
        cout << answer << endl;
    }
    return 0;
}