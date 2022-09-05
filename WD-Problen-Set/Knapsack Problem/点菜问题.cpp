#include<iostream>
#include<cstdio>
#define maxSize 1000
using namespace std;

int dp[maxSize];
int v[maxSize]; //物品的价格
int w[maxSize]; //物品的重量

int main()
{
    int n, m;   //n件物品 m容量的背包
    //状态转移方程: dp[i][j] = max{ dp[i-1][j], dp[i-1][j-w[i]] + v[i]}
    //化简后的状态转移方程: dp[j] = max{ dp[j], dp[j-w[i]] + v[i]}
    while (cin >> m >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> w[i] >> v[i];
        }
        for (int i = 0; i <= m; i++)
        {
            dp[i] = 0;
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = m; j >= w[i]; j--)
            {
                dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
            }
        }
        cout << dp[m] << endl;
    }
    
    
    return 0;
}