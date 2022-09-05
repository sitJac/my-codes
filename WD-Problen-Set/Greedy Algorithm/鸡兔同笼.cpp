#include<iostream>
using namespace std;
int main()
{
    int a;
    while (cin >> a)
    {
        int min = 0;
        int max = 0;
        if (a % 2 == 0)
        {
            min = a / 4 + (a % 4) / 2;
            max = a / 2;
        }
        cout << min << " " << max << endl;
    }
    return 0;
}