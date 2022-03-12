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

int fun(int n)  //求约数的个数
{
    vector<int> exponent;
    for (int i = 0; i < prime.size(); i++)
    {
        int factor = prime[i];
        if(n < factor)
        {
            break;
        }
        if(n % factor == 0)
        {
            int num = 0;
            while(n % factor == 0)
            {
                n /= factor;
                num++;
            }
            exponent.push_back(num);
        }
    }
    if(n > 1)
    {
        exponent.push_back(1);
    }
    int ans = 1;
    for (int i = 0; i < exponent.size(); i++)
    {
        ans *= exponent[i] + 1;
    }
    return ans;
}

int main()
{
	Initial();  //prime中存着质数
	int m;
    while(cin >> m)
    {
        if(m == 0)
        {
            break;
        }
        for (int i = 0; i < m; i++)
        {
            int n;
            cin >> n;
            cout << fun(n) << endl;
        }
    }
	return 0;
}