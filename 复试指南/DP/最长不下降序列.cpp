#include<bits/stdc++.h>
using namespace std;

const int MAXN = 201;
int a[MAXN];
int f[MAXN];//表示从第i个数开始的最长不下降子序列的长度
int p[MAXN];//表示该子序列的下一个位置

int MAXL;//最长的长度
int k;//位置

int ans;
int s;

int main()
{
    int n;
    while(cin >> n)
    {
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        f[n] = 1;
        p[n] = 0;
        for(int i = n - 1; i >= 1; i--)
        {
            MAXL = 0;
            k = 0;
            for(int j = i + 1; j <= n; j++)
            {
                if(a[i] < a[j])
                {
                    if(f[j] > MAXL)
                    {
                        MAXL = f[j];
                        k = j;
                    }
                }
            }
            f[i] = MAXL + 1;
            p[i] = k;
        }
        for(int i = 1; i <= n; i++)
        {
            if(f[i] > ans)
            {
                ans = f[i];
                s = i;
            }
        }
        cout << "max=" << ans << endl;
        while(s != 0)
        {
            cout << a[s] << " ";
            s = p[s];
        }
        cout << endl;
    }
    return 0;
}
/*
14
13 7 9 16 38 24 37 18 44 19 21 22 63 15
max=8
7 9 16 18 19 21 22 63
*/