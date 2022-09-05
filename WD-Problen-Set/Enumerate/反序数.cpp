#include<iostream>
using namespace std;

int Reverse(int x)
{
    int revx = 0;
    while (x != 0)
    {
        revx = revx*10 + x%10;
        x /= 10;
    }
    return revx;
}

int main()
{
    for (int i = 1000; i <= 1111; i++)
    {
        if (i*9 == Reverse(i))
        {
            cout << i << endl;
        }
    }
    
    return 0;
}