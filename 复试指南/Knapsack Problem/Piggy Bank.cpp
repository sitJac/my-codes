#include<iostream>
#include<cstdio>
#include<climits>
using namespace std;
const int INF = INT_FAST8_MAX / 10;
const int MAXN = 10000;

int dp[MAXN];
int v[MAXN];
int w[MAXN];

int main()
{
    //状态转移方程: dp[j] = max{dp[j], dp[j-w[i]] + v[i]}
    int caseNum;
    cin >> caseNum;
    while (caseNum--)
    {
        int e, f;
        cin >> e >> f;
        int m = f - e;   //背包容量
        int n;  //物品种类
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i] >> w[i];
        }
        for (int i = 0; i < n; i++)
        {
            dp[i] = INF;
        }
        dp[0] = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = w[i]; j <= m; j++)
            {
                dp[j] = min(dp[j], dp[j-w[i]]+v[i]);
            }
        }
        if (dp[m] == INF)
        {
            cout << "This is IMpossible." << endl;
        }
        else
        {
            cout << "The minimum amount of money in the piggy-bank is " << dp[m] << "." << endl;
        }
    }
    
    return 0;
}