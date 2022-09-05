#include<bits/stdc++.h>
using namespace std;

const int MAXN = 200;

int arr[MAXN];

int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int x;
        cin >> x;
        int answer = -1;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == x)
            {
                answer = i;
                break;
            }
        }
        cout << answer << endl;
    }
    return 0;
}