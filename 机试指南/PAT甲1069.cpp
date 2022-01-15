#include<iostream>
#include<algorithm>
using namespace std;

void divide(int N, int a[])
{
    for (int i = 0; i < 4; i++)
    {
        a[i] = N % 10;
        N = N / 10;
    }
}

void sorted(int N, int r[]) //保存结果的数组
{
    int a[4];
    int power;
    r[0] = r[1] = 0;
    divide(N, a);
    sort(a, a + 4);
    power = 1;
    for (int i = 0; i <= 3; i++)
    {
        r[0] += a[i] * power; //decrease
        power *= 10;
    }
    power = 1;
    for (int i = 3; i >= 0; i--)
    {
        r[1] += a[i] * power; //increase
        power *= 10;
    }
}

int main()
{
    int N;
    int arr[4], results[2];
    cin >> N;
    divide(N, arr);
    int flag = 0;  //判断四个位置的数字是否相等 eg:2222

    for (int j = 1; j <= 3; j++)
    {
        if (arr[j] != arr[j - 1])
        {
            flag = 1;
        }
    }

    if (flag == 0)  //各位都相同
    {
        printf("%4d - %4d = 0000\n", N, N);
    }
    else
    {
        do
        {
            sorted(N, results);
            N = results[0] - results[1];
            printf("%4d - %4d = %4d\n", results[0], results[1], N);
        } while (N != 6174);
        
    }
    return 0;
}