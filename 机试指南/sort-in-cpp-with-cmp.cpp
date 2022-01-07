#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int arr[10] = {4, 1, 3, 2, 4, 7, 8, -1, -5, 4};
    sort(arr, arr+10, cmp);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}