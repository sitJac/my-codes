#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
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
    int a, b;
    while (cin >> a >> b)
    {
        cout << a * b / GCD(a, b) << endl;
    }
    return 0;
}