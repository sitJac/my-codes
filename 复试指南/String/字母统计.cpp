#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while (cin >> str)
    {
        if(str == "")
        {
            break;
        }
        int n = str.size();
        int number[26];
        memset(number, 0, sizeof(number));  //初始化为0
        for (int i = 0; i < n; i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                number[str[i] - 'A']++;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            cout << chae('A' + i) << ":" << number[i] << endl;
        }
        
    }
    
}