//十六进制转化为十进制
#include<bits/stdc++.h>
using namespace std;

int CharToInt(char c)
{
    if(c >= '0' && c <= '9')
    {
        return c - '0';
    }
    else
    {
        return c - 'A' + 10;
    }
}

void Convert(string str, int x) //十六进制转化为十进制
{
    int number = 0, p = 1;
    int len = str.size();
    for (int i = len - 1; i >= 0; i--)
    {
        number = number + CharToInt(str[i])*p;
        p *= x;
    }
    cout << number << endl;
}

int main()
{
    string str;
    while (cin >> str)
    {
        str = str.substr(2);
        Convert(str, 16);
    }
    return 0;
}