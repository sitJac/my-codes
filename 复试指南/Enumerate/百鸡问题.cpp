#include<iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        for (int x = 0; x <= 100; x++)
        {
            for (int y = 0; y <= 100; y++)
            {
                for (int z = 0; z <= 100; z++)
                {
                    if ((x + y + z == 100) && (5*x + 3*y + (double)z/3 <= n))
                    {
                        cout << "x=" << x << ",y=" << y <<",z=" << z <<endl;
                    }
                }
            }
        }
    }
    return 0;
}