#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    while (getline(cin, str1))
    {
        if(str1 == "#")
        {
            break;
        }
        getline(cin, str2);
        int n = str1.size();
        int number[n];
        memset(number, 0, sizeof(number));  //数组初始化
        for (int i = 0; i < str1.size(); i++)
        {
            for (int j = 0; j < str2.size(); j++)
            {
                if(str2[j] == str1[i])
                {
                    number[i]++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << str1[i] << " " << number[i] << endl;
        }
        
    }
    
    return 0;
}