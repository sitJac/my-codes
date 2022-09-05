#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1000;

struct bigInt
{
    int d[MAXN];    //存大整数数据部分的数组
    int len;    //存大整数的长度 多少位
};

bigInt change(string str)   //输入一个大整数
{
    bigInt bI;
    bI.len = str.size();   //#include<string.h>
    for (int i = 0; i < 1000; i++)  //先初始化为零
    {
        bI.d[i] = 0;
    }
    for (int i = 0; i < bI.len; i++)    //将字符数组中的每一位转化成对应的大整数的整数位
    {
        bI.d[i] = str[bI.len - i - 1] - '0';    //把字符型整数转化成整型整数
    }
    return bI;
}

//add
bigInt add(bigInt a, bigInt b)
{
    bigInt c;
    c.len = 0;
    int carry = 0;  //暂存进位
    for (int i = 0; i < a.len || i < b.len; i++)    // && : 并且        || : 或
    {
        int temp = a.d[i] + b.d[i] + carry;
        c.d[c.len] = temp % 10;
        c.len++;
        carry = temp / 10;
    }
    if (carry != 0)
    {
        c.d[c.len] = carry;
        c.len++;
    }
    return c;
}

int main()
{
    bigInt a, b;
    string s1, s2;
    while (cin >> s1 >> s2)
    {
        a = change(s1);
        b = change(s2);
        bigInt ans;
        ans = add(a, b);
        for (int i = ans.len - 1; i >= 0; i--)
        {
            cout << ans.d[i];
        }
        cout << endl;
    }
    return 0;
}