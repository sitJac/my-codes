#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100;

int arr[MAXN];

bool BinarySearch(int n, int target)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if(target < arr[mid])
        {
            right = mid - 1;
        }
        else if(target > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int m;
        cin >> m;
        while (m--)
        {
            int target;
            cin >> target;
            if(BinarySearch(n, target))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}