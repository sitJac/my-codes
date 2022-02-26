#include<iostream>
#include<cstdio>
using namespace std;
#define maxSize 91

long long dp[maxSize];

int main()
{
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i < maxSize; ++i)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    int n;
    while (cin >> n)
    {
        cout << dp[n] << endl;
    }
    return 0;
}