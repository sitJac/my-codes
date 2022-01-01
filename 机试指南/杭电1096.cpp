#include <iostream>
using namespace std;

int main()
{
    int casenum;
    int sum = 0;
    int x;

    cin >> casenum;
    while (casenum--)
    {
        int num;
        cin >> num;

        while (num--)
        {
            cin >> x;
            sum += x;
        }
        cout << sum << endl;
        if(casenum != 0)
        {
            cout << endl;
        }
    }
    return 0;
}