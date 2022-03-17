#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string a[s.size()];
    for(int i = 0; i < s.size(); ++i)
    {
        a[i] = s.substr(i, s.size() - i);    //求s的后缀字符串
    }
    sort(a, a + s.size());
    for(int i = 0; i < s.size(); ++i)
    {
        cout << a[i] << endl;
    }
    return 0;
}