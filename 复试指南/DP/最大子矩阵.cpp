//状态转移方程： dp[i] = max{A[i], dp[i-1]+A[i]}
#include<iostream>
#include<cstdio>
#define maxSize 100
using namespace std;

int matrix[maxSize][maxSize];
int total[maxSize][maxSize];
int a[maxSize];
int dp[maxSize];

int MaxSubsequence(int n)
{
    int maximum = -maxSize;
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

int MaxSubmatrix(int n) 
{
    int maximal=0;
    for(int i=0; i<n; i++) 
    {
        for(int j=i; j<n; j++) 
        {
            for(int k=0; k<n; k++) 
            {
                if(i==0) 
                {
                    a[k]=total[j][k];
                } 
                else 
                {
                    a[k]=total[j][k]-total[i-1][k];
                }
            }
            int current = MaxSubsequence(n);
            maximal = max(maximal, current);
        }
    }
    return maximal;
}

int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> matrix[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0)
                {
                    total[i][j] = matrix[i][j];
                }
                else
                {
                    total[i][j] = total[i - 1][j] + matrix[i][j];
                }
            }
        }
        int answer = MaxSubmatrix(n);
        cout << answer << endl;
    } 
    return 0;
}