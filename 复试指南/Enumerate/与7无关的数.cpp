#include<iostream>
using namespace std;

bool isSeven(int x)
{
    if (x % 7 == 0)
    {
        return true;
    }
    else 
    {
        while (x != 0)
        {
            if (x % 10 == 7)
                return true;
            x /= 10;
        }
    }
    return false;
}

int main()
{
    int n;
    while (cin >> n)
    {
        int sum = 0;
        for (int i = 0; i <= n; i++)
        {
            if (!isSeven(i))
            {
                sum += i*i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}