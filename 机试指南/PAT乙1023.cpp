#include<iostream>
using namespace std;

int main()
{
    int num[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }
    
    int k = 1;
    while (num[k] == 0)
    {
        k++;
    }

    for (int i = k; i < 10; i++)
    {
        if (i == k)
        {
            cout << i;
            for (int j = 0; j < num[0]; j++)
            {
                cout << 0;
            }
            for (int j = 1; j < num[i]; j++)
            {
                cout << i;
            }
        }
        else
        {
            for (int j = 0; j < num[i]; j++)
            {
                cout << i;
            }
        }
    }

    return 0;
}