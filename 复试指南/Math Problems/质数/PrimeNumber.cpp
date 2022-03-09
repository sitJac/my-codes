#include<bits/stdc++.h>
using namespace std;

const int MAXN = 10000;

vector<int> prime;  //保存素数
bool isPrime[MAXN]; //标记数组

void Select()
{
    for (int i = 0; i < MAXN; i++)  //初始化
    {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i < MAXN; i++)
    {
        if(!isPrime[i])    //如果是非质数
        {
            continue;
        }
        prime.push_back(i);
        for (int j = i * i; j < MAXN; j += i)
        {
            isPrime[j] = false;     //质数的倍数为非质数
        }
    }
    return ;
}

int main()
{
    Select();
    int n;
    while (cin >> n)
    {
        cout << prime[n - 1] << endl;
    }
    return 0;
}