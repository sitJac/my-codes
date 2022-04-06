#include<bits/stdc++.h>
using namespace std;
const int MAXN = 10000;
const int MAXK = 100;

int main()
{
    int n, k;       //n个石子 k个筐
    int num[n];     //n个石子的重量
    cin >> n >> k;
    
    int sum = 0;    //石子的总重量
    int ans = 0;

    for(int i = 0; i < n; i++)  //输入石子的重量
    {
        cin >> num[i];
        sum += num[i];
    }

    for(int i = sum; i >= 0; i--)   //穷举
    {
        int cnt = 1;
        int temp = 0;
        for(int j = 0; j < n; j++)  //遍历每个石子
        {
            if(temp + num[j] <= i)
            {
                temp += num[j];
            }
            else
            {
                temp = num[j];
                cnt++;
            }
        }
        if(cnt == k)
        {
            ans = i;
        }
        if(cnt > k)
        {
            cout << ans << endl;
            return 0;
        }
        cnt = 1;
    }
    
    return 0;
}