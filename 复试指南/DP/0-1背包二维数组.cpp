#include<bits/stdc++.h>
using namespace std;
const int MAX = 1010;

int n, m;
int w[MAX];//体积
int v[MAX];//价值
int dp[MAX][MAX];//dp[i][j]表示物品i放入背包j中的最大价值

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){ //输入物品的体积和价值
        cin >> w[i] >> v[i];
    }
    for(int i = 0; i <= n; i++){ //初始化
        dp[i][0] = 0;
    }
    for(int j = 0; j <= m; j++){ //初始化
        if(j >= w[0]){
            dp[0][j] = v[0];
        }
        else{
            dp[0][j] = 0;
        }
    }
    for(int i = 1; i <= n; i++){ //注意遍历顺序
        for(int j = 1; j <= m; j++){
            dp[i][j] = max(dp[i-1][j], dp[i-1][j - w[i]]+v[i]); //状态转移方程
        }
    }
    cout << dp[n][m];
    return 0;
}