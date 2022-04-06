#include<bits/stdc++.h>
using namespace std;

int cmp(char a, char b)
{
    return a < b;
}

int main()
{
    string str1, str2, str3, str4;
    while (cin >> str1 >> str2)
    {
        str3 = str1 + str2;
        int n = str3.size();
        sort(str3.begin(), str3.end(), cmp);
        str4 = "";
        for(int i = 0; i < str3.size(); i++)
        {
            if(i == 0)
            {
                str4 += str3[i];
            }
            else
            {
                if(str3[i] == str3[i - 1])
                {
                    continue;
                }
                else
                {
                    str4 += str3[i];
                }
            }
        }
        cout << str4 << endl;
    }
    return 0;
}