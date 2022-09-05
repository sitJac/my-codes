#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(getline(cin, str))
    {
        //将字符串平均分为三份，如果有余数的都给横排。
        int n = str.size();
        int n1  = (n + 2) / 3;
        int n2 = (n + 2) / 3 + ((n + 2) % 3);
        for (int i = 0; i < n1 - 1; i++)
        {
            cout << str[i];
            for (int j = 0; j < n2 - 2; j++)
            {
                cout << " ";
            }
            cout << str[n - 1 - i] << endl;
        }
        for (int i = n1 - 1; i <= n - n1 ; i++)
        {
            cout << str[i];
        }
        cout << endl;
    }
    return 0;
}