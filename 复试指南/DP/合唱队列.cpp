#include<bits/stdc++.h>
using namespace std;

int a[101];//存储每个同学的身高
int dp1[101];//以第i位同学为终点的最长上升序列长度
int dp2[101];//以第i位同学为起点的最长下降序列长度

int main()
{
    int n;
    int maxL;
    int ans = 0;
    while(cin >> n)
    {
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        //上升序列高度
        dp1[1] = 1;
        for(int i = 2; i <= n; i++)
        {
            maxL = 0;
            for(int j = 1; j <= i - 1; j++)
            {
                if(a[i] > a[j])
                {
                    if(dp1[j] > maxL)
                    {
                        maxL = dp1[j];
                    }
                }
            }
            dp1[i] = maxL + 1;
        }

        //下降序列
        dp2[n] = 1;
        for(int i = n - 1; i >= 1; i--)
        {
            maxL = 0;
            for(int j = i + 1; j <= n; j++)
            {
                if(a[i] > a[j])
                {
                    if(dp2[j] > maxL)
                    {
                        maxL = dp2[j];
                    }
                }
            }
            dp2[i] = maxL + 1;
        }

        for(int i = 1; i <= n; i++)
        {
            if(dp1[i] + dp2[i] > ans)
            {
                ans = dp1[i] + dp2[i];
            }
        }
        cout << n - (ans - 1);
    }
    return 0;
}