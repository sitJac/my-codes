#include<bits/stdc++.h>
using namespace std;

bool Judge(int n)
{
    if(n < 2)
    {
        return false;
    }
    int bound = sqrt(n);
    for (int i = 2; i <= bound; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    while(cin >> n)
    {
        if(Judge(n))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}