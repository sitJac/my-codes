
/*
输入：Jkdi234klowe90a3
输出：Jkdi*234*klowe*90*a*3*
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string number;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            number += str[i];
        }
        else
        {
            if(number == "")
                cout << str[i];
            else
            {
                cout << "*" << number << "*" << str[i];
                number = "";
            }
        }
    }
    if(number != "")
        cout << "*" << number << "*";
    return 0;
}
/*
非常简单的解法
1.申请一个string 类型的cache，
2.for循环遍历字符串，
3.如果是数字，把数字加到cache里面，继续遍历，如果不是数字，分两种情况，cache为空，直接打印，cache不为空，输出*cache*，在输出字符，清空cache。
FBI WARNNING ，循环结束时，需要查看cache是否为空，不为空的话，在输出一下。
*/