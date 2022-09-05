#include<bits/stdc++.h>
using namespace std;

int arr[10];

bool cmp(int a, int b)
{
    if(a % 2 == 0 && b % 2 == 0)    //偶数 升序
    {
        return a < b;
    }
    else if(a % 2 == 1 && b % 2 == 1)   //奇数 降序
    {
        return a > b;
    }
    else if(a % 2 == 1 && b % 2 == 0)   //奇数排到前面
    {
        return true;
    }
    else                                //偶数排到后面 
    {
        return false;
    }
}

int main()
{
    int n = 10;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+10, cmp);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

//odd奇数
//even偶数