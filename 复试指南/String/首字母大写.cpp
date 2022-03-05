#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while (getline(cin, str))
    {
        int len = str.size();
        if(str[0] >= 'a' && str[0] <= 'z')
        {
            str[0] -= 32;
        }
        for (int i = 0; i < len; i++)
        {
            if(str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\n')
            {
                if(str[i+1] >= 'a' && str[i] <= 'z')
                {
                    str[i+1] -= 32;
                }
            }
        }
        cout << str << endl;;
    }
    
    return 0;
}