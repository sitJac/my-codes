#include<iostream>
using namespace std;

int getGcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return getGcd(b, a % b);
    }
    
}

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        int gcd = getGcd(a, b);
        cout << gcd << endl;
    }
    
    return 0;
}

///gcd(a, b) = gcd(b, a % b)    辗转相除法