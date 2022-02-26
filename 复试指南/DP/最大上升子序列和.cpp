#include<iostream>
#include<cstdio>
#define maxSize 1000
using namespace std;

int arr[maxSize];
int dp[maxSize];

int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        //状态变换方程：dp[i] = max{a[i], dp[j] + a[i] | j < i && a[j] < a[i]}
        int answer = 0;
        for (int i = 0; i < n; i++)
        {
            dp[i] = arr[i];
            for (int j = 0; j < i; ++j)
            {
                if (arr[j] < arr[i])
                {
                    dp[i] = max(dp[i], dp[j] + arr[i]);
                }
            }
            answer = max(answer, dp[i]);
        }
        cout << answer << endl;
    }
    return 0;
}