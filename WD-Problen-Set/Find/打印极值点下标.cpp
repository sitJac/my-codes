#include<bits/stdc++.h>
using namespace std;

const int MAXK = 80;

int a[MAXK];

int main()
{
    int n;
    int i = 0;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if(a[0] != a[1])
        {
            cout << 0 << " ";
        }
        for (int i = 1; i < n - 1; i++)
        {
            if(a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                cout << i << " ";
            }
            else if(a[i] < a[i - 1] && a[i] < a[i + 1])
            {
                cout << i << " ";
            }
        }
        if(a[n - 1] != a[n - 2])
        {
            cout << n - 1 << endl;
        }
        cout << endl;
    } 
    
    return 0;
}