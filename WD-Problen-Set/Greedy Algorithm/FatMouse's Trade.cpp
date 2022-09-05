#include<iostream>
#include<cstdio>
#include<algorithm>

#define maxSize 1001

using namespace std;

struct JavaBean
{
    double weight;
    double price;
};

JavaBean arr[maxSize];

bool cmp(JavaBean x, JavaBean y)
{
    return (x.weight/x.price) > (y.weight/y.price);
}

int main()
{
    int m, n;
    while (cin >> m >> n)
    {
        if (m == -1 && n == -1) break;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i].weight >> arr[i].price;
        }
        sort(arr, arr + n, cmp);
        double answer = 0;
        for (int i = 0; i < n; i++)
        {
            if(m >= arr[i].price)
            {
                m -= arr[i].price;
                answer += arr[i].weight;
            }
            else
            {
                answer += arr[i].weight * (m / arr[i].price);
                break;
            }
        }
        printf("%.3f\n", answer);
    }
    return 0;
}