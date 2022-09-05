#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    long long a, b;
    while (cin >> m)
    {
        if(m == 0)
        {
            break;
        }
        cin >> a >> b;
        long long x = a + b;
        if(x == 0)
        {
            cout << x;
            break;
        }
        vector<int> answer;
        while (x != 0)
        {
            answer.push_back(x % m);
            x /= m;
        }
        for (int i = answer.size() - 1; i >= 0; i--)
        {
            cout << answer[i];
        }
        cout << endl;
    }
    
    return 0;
}