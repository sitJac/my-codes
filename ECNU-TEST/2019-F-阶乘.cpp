#include<bits/stdc++.h>
using namespace std;

const long long MAXK = 2e8;

long long factorial(long long k)    //求n的阶乘
{
    if(k == 0)
    {
        return 1;
    }
    return k*factorial(k - 1);
}

int get_n_zero(long long x)     //求n末尾连续零的个数
{
    if(x < 5)
    {
        return 0;
    }
    else
    {
        return (x / 5 + get_n_zero(x / 5));
    }
}

int main()
{
    long long k;
    cin >> k;

    int i = 0;
    int num0 = get_n_zero(i);

    while (num0 < k)
    {
        i++;
        num0 = get_n_zero(i);
    }
    cout << i;
    
    return 0;
}