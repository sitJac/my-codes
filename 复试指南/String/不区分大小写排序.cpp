//A Famous Saying: Much Ado About Nothing (2012/8).
//A aaAAbc dFgghh: iimM nNn oooos Sttuuuy (2012/8).

#include<bits/stdc++.h>
using namespace std;

bool cmp(char a, char b)
{
    return tolower(a) < tolower(b);
}

int main()
{
    string str;
    getline(cin, str);
    string abc;
    map<char, char> mp;
    for(int i = 0; i < str.size(); i++)
    {
        if(isalpha(str[i]))
        {
//             abc += tolower(str[i]);
            abc += str[i];
        }
    }
    stable_sort(abc.begin(),abc.end(),cmp);
    int j = 0;
    for(int i = 0; i < str.size(); i++)
    {
        if(isalpha(str[i]))
        {
            cout << abc[j];
            j++;
        }
        else
        {
            cout << str[i];
        }
    }
    return 0;
}