#include<iostream>
using namespace std;
#define maxSize 1000001

void findPrime(int n, int prime[])   //n：要求的素数的个数
{
    int p[maxSize] = {0};   //全部初始化为零
    int num = 0;
    for (int i = 2; i < maxSize; i++)   //从 2 到 100 0000
    {
        if (p[i] == 0)
        {
            prime[ num++ ] = i;
            if(num >= n)
                break;
            for(int j = i + i/*二倍*/; j < maxSize; j+=i)   //艾斯筛法抹掉当前求得的素数的倍数的过程
                p[j] = 1;   //从序列中抹去 0是素数 1不是素数
        }
    }
}

int main()
{
    int M, N ,count = 0;
    int Prime[10000] = {0};
    cin >> M >> N;
    findPrime(N, Prime);    //求N个素数放在Prime数组中
    for (int i = M; i <= N; i++)
    {
        cout << Prime[i - 1];
        ++count;
        if(count % 10 != 0 && i < N)
            cout << " ";
        else
            cout << endl;
    }
    return 0;
}

//判断是否为素数
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
