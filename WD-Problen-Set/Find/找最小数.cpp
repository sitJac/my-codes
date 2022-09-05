#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1000;

struct number
{
    int x;
    int y;
};

number num[MAXN];

bool cmp(number n1, number n2)
{
    if(n1.x == n2.x)
    {
        return n1.y < n2.y;
    }
    else
    {
        return n1.x < n2.x;
    }
}

int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> num[i].x >> num[i].y;
        }
        sort(num, num + n, cmp);
        cout << num[0].x << " " << num[0].y;
    }
    
    return 0;
}