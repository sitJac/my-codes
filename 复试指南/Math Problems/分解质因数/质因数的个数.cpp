#include<bits/stdc++.h>
using namespace std;

const int MAXN = sqrt(1e9) + 1;

vector<int> prime;  //保存素数
//bool isprime[MAXN];   //variable length array declaration not allowed at file scope
bool isPrime[MAXN]; //标记数组

void Select()   //艾斯筛法初始化素数表
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
        int answer = 0;
        for (int i = 0; i < prime.size() && prime[i] < n; i++)
        {
            int factor = prime[i];
            while (n % factor == 0)
            {
                answer++;
                n /= factor;
            }
        }
        if(n > 1)
        {
            answer++;
        }
        cout << answer << endl;
    }
    return 0;
}