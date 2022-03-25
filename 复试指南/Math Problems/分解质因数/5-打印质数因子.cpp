#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    while(cin >> num)
    {
        for(int i = 2; i <= sqrt(num); i++)
        {
            while(num % i == 0)
            {
                cout << i << " ";
                num /= i;
            }
        }
        if(num > 1)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}