#include<iostream>
#include<cstdio>

using namespace std;

long long Factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
        return Factorial(n - 1) * n;
    
}

int main()
{
    int n;
    while (cin >> n)
    {
        cout << Factorial(n) << endl;
    }
    return 0;
}