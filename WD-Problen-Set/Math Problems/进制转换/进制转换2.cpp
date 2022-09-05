//m - 10 - n
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
char IntToChar(int x)
{
    if(x < 10)
    {
        return x + '0';
    }
    else
    {
        return x - 10 + 'a';
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    string str;
    cin >> str;
    long long number = 0;
    for (int i = 0; i < str.size(); i++)    //m进制转化为十进制
    {
        number = number * m;
        number = number + CharToInt(str[i]);
    }
    vector<char> answer;
    while (number != 0)     //十进制转化为n进制
    {
        answer.push_back(IntToChar(number % n));
        number /= n;
    }
    for (int i = answer.size() - 1; i >= 0; i--)
    {
        cout << answer[i];
    }
    cout << endl;
    
    return 0;
}