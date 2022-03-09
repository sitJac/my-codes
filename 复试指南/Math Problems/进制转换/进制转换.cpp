//无法用整型数 字符串模拟数字 转化为二进制
#include<bits/stdc++.h>
using namespace std;

string Divide(string str, int x)    //字符串模拟数字取整
{
    int remainder = 0;   //余数
    for (int i = 0; i < str.size(); i++)    //从高位开始进行除法操作
    {
        int current = remainder * 10 + str[i] - '0'; //当前数字 被除数
        str[i] = current / x + '0'; //商
        remainder = current % x;
    }
    int pos = 0;    //将前面的0去掉
    while (str[pos] == '0')
    {
        pos++;
    }
    return str.substr(pos);
}

int main()
{
    string str;
    while (cin >> str)
    {
        vector<int> binary;
        while(str.size() != 0)
        {
            int last = str[str.size() - 1] - '0';
            binary.push_back(last % 2);
            str = Divide(str, 2);
        }
        for (int i = binary.size() - 1; i >= 0; i--)
        {
            cout << binary[i];
        }
        cout << endl;
    }
    return 0;
}