#include<iostream>
#include<cstdio>
#define maxSize 25
using namespace std;

int height[maxSize];
int dp[maxSize];

int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; ++i)
        {
            cin >> height[i];
        }
        //状态变换方程：dp[i] = max{1, dp[j] + 1 | j < i && a[j] >= a[i]}
        int answer = 0;
        for (int i = 0; i < n; i++)
        {
            dp[i] = 1;
            for (int j = 0; j < i; ++j)
            {
                if (height[j] >= height[i])
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            answer = max(answer, dp[i]);
        }
        cout << answer << endl;
    }
    return 0;
}