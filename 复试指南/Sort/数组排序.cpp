#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100;

int main()
{
    int n;
    int nums[MAXN];
    while(cin >> n)
    {
        if(n == 0)
        {
            break;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        sort(nums, nums + n);
        for (int i = 0; i < n; i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
    return 0;
}