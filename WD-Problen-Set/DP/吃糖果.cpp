#include<iostream>
#include<cstdio>
#define maxSize 100
using namespace std;

long long dp[maxSize];

int main()
{
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 0; i < maxSize; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    int n;
    while (cin >> n)
    {
        cout << dp[n];
    }
    
    return 0;
}