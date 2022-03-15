#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100;

int main()
{
    int n;
    cin >> n;
    long long dp[MAXN];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i < MAXN; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    for (int i = 0; i < MAXN; i++)
    {
        if(dp[i] == n)
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}