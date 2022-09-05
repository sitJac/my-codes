#include<iostream>
#include<cstdio>
using namespace std;

long long Function(int n)
{
    if (n == 1)
    {
        return 2;
    }
    else
    {
        return Function(n-1) + 1 + Function(n-1) + 1 + Function(n-1);
    }
}

int main()
{
    int n;
    
    while (cin >> n)
    {
        cout << Function(n) << endl;
    }
    return 0;
}