#include<bits/stdc++.h>

using namespace std;

bool cmp(const pair<char, int>& a, const pair<char, int>& b)
{
    return a.second > b.second;
}

int main()
{
    string str;
    while(cin >> str)
    {
        map<char, int> mp;
        for(int i = 0; i < str.size(); i++)
        {
            mp[str[i]]++;
        }
        vector< pair<char, int> > v(mp.begin(), mp.end());
        stable_sort(v.begin(), v.end(), cmp);
        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i].first;
        }
        cout << endl;
    }
    return 0;
}