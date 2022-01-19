/*int isPrime(int n)
{
    for (int  i = 1; i <= n-1; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        return 1;
    }
    
}*/

//艾氏筛法

#include<iostream>
using namespace std;
#define maxSize 1000001

int findPrime(int n, int prime[])
{
    int p[maxSize] = {0};   //全部初始化为零
    int num = 0;
    for (int i = 2; i < maxSize; i++)
    {
        if (p[i] == 0)
        {
            prime[num++] = i;
            if(num >= n)
                break;
            for(int j = i + i; j < maxSize; j+=i)
                p[j] = 1;
        }
    }
}

int main()
{
    int M, N ,count = 0;
    int Prime[10000] = {0};
    cin >> M >> N；
    findPrime(N, Prime);
    for (int i = M; i <= N; i++)
    {
        cout << Prime[i - 1];
        ++count;
        if(count % 10 != 0 && i < N)
            cout << " ";
        else
            count << endl;
    }
    return 0;
}
