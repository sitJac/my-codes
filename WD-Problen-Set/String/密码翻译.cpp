#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while (getline(cin, str))   //获取一行字符串
    {
        for (int i = 0; i < str.size(); i++)
        {
            if(str[i] == 'Z' || str[i] == 'z')
            {
                str[i] -= 25;
            }
            else if((str[i] >= 'a' && str[i] < 'z') || (str[i] >= 'A' && str[i] < 'Z'))
            {
                str[i]++;
            }
        }
        for (int i = 0; i < str.size(); i++)
        {
            cout << str[i];
        }
        cout << endl;
    }
    
    return 0;
}