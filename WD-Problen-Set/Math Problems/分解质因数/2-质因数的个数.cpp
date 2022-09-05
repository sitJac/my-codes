#include<bits/stdc++.h>
using namespace std;
const int MAXN = 10000000;

vector<int> prime;
bool isPrime[MAXN];

void Initial()  //质数筛法
{
    for (int i = 0; i < MAXN; i++)
    {
        isPrime[i] = true;  //初始化全部标记为质数
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i < MAXN; i++)
    {
        if(!isPrime[i])
        {
            continue;
        }
        prime.push_back(i);
        for (int j = 2 * i; j < MAXN; j+=i)  //质数的倍数不是质数
        {
            isPrime[j] = false;
        }
    }
    return ;
}

int main()
{
	Initial();  //prime中存着质数
	int n;
    while(cin >> n)
    {
        int count = 0;
        for (int i = 0; i < sqrt(n); i++)
        {
            while (n % prime[i] == 0)
            {
                count++;
                n /= prime[i];
            }
        }
        if(n > 1)
        {
            count++;
        }
        cout << count << endl;
    }
	return 0;
}