#include<bits/stdc++.h>
using namespace std;
const int MAX = 1010;

int n, m;
int w[MAX];//体积
int v[MAX];//价值
int dp[MAX];
//dp[i]表示物品i放入背包j中的最大价值

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> w[i] >> v[i];
    }
    memset(dp, 0, sizeof(dp));
    for(int i = 0; i <= n; i++){    //遍历物品
        for(int j = m; j >= w[i]; j--){    //遍历背包-采用倒叙
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }
    cout << dp[m];
    return 0;
}