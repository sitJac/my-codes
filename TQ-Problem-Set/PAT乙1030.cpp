#include<iostream>
#include<algorithm>
using namespace std;

int bSearch(int L, in R, long long key, long long arr[])
{
    while (L <= R)
    {
        int mid = (L + R) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            R = mid - 1;
        else 
            L = mid + 1;
    }
    return R;
}

int main()
{
    long long N, p;
    long long arr[100010];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + N);     //正序排序是默认的
    int max = 1;
    for (int i = 0; i < N; i++)
    {
        int k = bSearch(i + 1, N - 1, p*arr[i], arr);
        if (max < k - i + 1)
            max = k - i + 1;
    }
    cout << max << endl;
    return 0;
}