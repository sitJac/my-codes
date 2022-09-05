#include<bits/stdc++.h>

using namespace std;

int main()
{
    string skew;
    while(cin >> skew)
    {
        if(skew == "0")
        {
            break;
        }
        int n = skew.size();
        int sum = 0;
        for(int i = 0; i < n; ++i)
        {
            if(skew[i] != '0')
            {
                sum += (skew[i] - '0')*(pow(2, n-i) - 1);
            }
        }
        cout << sum << endl;
    }
}