#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> binary;
        while (n != 0)
        {
            binary.push_back(n % 2);
            n /= 2;
        }
        for (int i = binary.size() - 1; i >= 0; i--)    //逆序输出
        {
            cout << binary[i];
        }
        cout << endl;
    }
    return 0;
}