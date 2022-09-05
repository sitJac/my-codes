//最长不递增序列的长度
//Dilworth定理
//偏序集能划分成的最少的全序集个数等于最大反链的元素个数。
#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1001;

int a[MAXN];
int dp[MAXN];
int dp1[MAXN];

int n;
int maxL;
int max_res;
int res2;

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    //dp[i]表示以i为起点的最长不递增序列的长度
    dp[n] = 1;
    for(int i = n - 1; i >= 1; i--){
        maxL = 0;
        for(int j = i + 1; j <= n; j++){
            if(a[i] >= a[j]){
                if(dp[j] > maxL){
                    maxL = dp[j];
                }
            }
        }
        dp[i] = maxL + 1;
    }
    for(int i = 1; i <= n; i++){
        if(dp[i] > max_res){
            max_res = dp[i];
        }
    }
    cout << max_res << endl;
    //最少的下降序列个数就等于整个序列最长上升子序列的长度
    //dp1[i]表示以i为起点的最长上升子序列的高度
    dp1[n] = 1;
    for(int i = n - 1; i >= 1; i--)
    {
        maxL = 0;
        for(int j = i+1; j <= n; j++)
        {
            if(a[i] < a[j])
            {
                if(dp1[j] > maxL)
                {
                    maxL = dp1[j];
                }
            }
        }
        dp1[i] = maxL + 1;
    }
    for(int i = 1; i <= n; i++){
        if(res2 < dp1[i]){
            res2 = dp1[i];
        }
    }
    cout << res2;
    return 0;
}