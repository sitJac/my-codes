#include <iostream>
using namespace std;

int main()
{
    int N, row;
    char ch;
    cin >> N >> ch;

    if (N % 2 == 0)
        row = N / 2;
    else
        row = N / 2 + 1;

    for (int i = 0; i < N ; i++)// first row
        cout << ch;
    cout << endl;

    for (int i = 0; i < row -2; i++) // 2~n-1
    {
        for (int j = 0; j < N; j++)
        {
            if(j == 0)
                cout << ch;
            else if(j == N - 1)
                cout << ch << endl;
            else 
                cout << " ";
        }
    }

    for (int i = 0; i < N; i++)// last row
        cout << ch;
    cout << endl;

    return 0;
}