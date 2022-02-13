#include<iostream>
#include<vector>
using namespace std;

int coinChange(vector<int> &coins, int amount)
{
    vector<int> dp(amount+1, -1);
    dp[0] = 0;

    for (int i = 1; i <= amount; i++)
        for (int j = 0; i < coins.size(); j++)
        {
            if(coins[j] <= i && dp[i-coins[j]]!=-1)
            {
                if (dp[i] == -1 || dp[i] > dp[i-coins[j]]+1)
                {
                    dp[i] = dp[i-coins[j]]+1;
                }
            }
        }
    return dp[amount];
}

int main(){
    vector<int> coins;
    coins.push_back(1);
    coins.push_back(2);
    coins.push_back(5);
    coins.push_back(7);
    coins.push_back(10);
    int result = coinChange(coins, 14);
    cout << result;
    return 0;
}