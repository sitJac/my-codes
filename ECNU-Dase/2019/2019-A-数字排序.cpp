#include<iostream>
#include<algorithm>
#define maxSize 10001
using namespace std;

int cmp(int a, int b)
{
    return a > b;
}
int main()
{
    int n;
    int arr[maxSize];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}