#include <iostream>
#define MAX_SIZE 100
using namespace std;

int main()
{
    unsigned int A, B, C, D, result[MAX_SIZE] = {};

    while (cin >> A >> B >> D)
    {
        C = A + B;
        int n = 0;  //记录转换的结果有多少位
        do
        {
            result[n] = C % D;
            C /= D;
            ++n;
        } while (C > 0);
        
        for (int i = n - 1; i >= 0; i--)
        {
            cout << result[i];
        }
        cout << endl;
    }

    return 0;
}