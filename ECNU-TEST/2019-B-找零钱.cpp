#include<bits/stdc++.h>
#define maxSize 101
using namespace std;

int main()
{
    int x, a;
    cin >> x >> a;
    
    map<int, int> mp;
    mp[1] = 1;
    mp[2] = maxSize;
    mp[5] = a;
    int cnt = 0;
    while(x >= 5 && mp[5] > 0)
    {
        x -= 5;
        cnt++;
        mp[5]--;
    }
    while(x >= 2 && mp[2] > 0)
    {
        x -= 2;
        cnt++;
        mp[2]--;
    }
    while(x >= 1 && mp[1] > 0)
    {
        x -= 1;
        cnt++;
        mp[1]--;
    }
    cout << cnt;
    return 0;
}