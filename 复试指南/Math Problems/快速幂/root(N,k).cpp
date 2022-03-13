#include<bits/stdc++.h>
using namespace std;

long long root(long long x, long long y, int k)
{
    long long res = 1;
    while(y)
    {
        if(y % 2 == 1)
        {
            res = x * res % k;
        }
        y /= 2;
        x = x * x / k;
    }
    return res;
}

int main()
{
    int x, y, k, res;
    while(cin >> x >> y >> k)
    {
        res = root(x, y, k - 1);
        if(res == 0)
        {
            res = k - 1;
        }
        cout << res << endl;
    }
}