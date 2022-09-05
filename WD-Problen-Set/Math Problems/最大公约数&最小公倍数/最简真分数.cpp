#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b)   //求最大公约数
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        return GCD(b, a % b);
    }
}

int main()
{
    int n;
    while (cin >> n)
    {
        if(n == 0)
        {
            break;
        }
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if(GCD(arr[i], arr[j]) == 1)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}