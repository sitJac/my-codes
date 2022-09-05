#include<iostream>
#define maxSize 200
using namespace std;

int main()
{
    int n, x;
    int array[maxSize];
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        cin >> x;
        int i = 0;
        for (i = 0; i < n; i++)
        {
            if (x == array[i])
            {
                cout << i << endl;
                break;
            }
        }

        if (i == n)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}