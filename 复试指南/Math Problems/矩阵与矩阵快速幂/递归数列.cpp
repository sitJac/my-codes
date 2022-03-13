#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a0, a1, p, q, k;
    int i;
    while(cin >> a0 >> a1 >> p >> q >> k)
    {
        int a[k+1];
        a[0] = a0;
        a[1] = a1;
        for(i = 2; i < k+1; i++) 
        {
            a[i] = ((p * a[i - 1]) + (q * a[i -2])) % 10000;
        }
        cout << a[k] << endl;
    }
    return 0;
}