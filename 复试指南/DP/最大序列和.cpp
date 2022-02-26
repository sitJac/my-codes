//状态转移方程： dp[i] = max{A[i], dp[i-1]+A[i]}
#include<iostream>
#include<cstdio>
#define maxSize 1000001
using namespace std;

long long a[maxSize];
long long dp[maxSize];

long long maxSubsequence(int n)
{
    long long maximum = -maxSize;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            dp[i] = a[i];
        }
        else
        {
            dp[i] = max(a[i], dp[i-1] + a[i]);
        }
        maximum = max(maximum, dp[i]);
    }
    return maximum;
}

int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long answer;
        answer = maxSubsequence(n);
        cout << answer << endl;
    }
    
    return 0;
}