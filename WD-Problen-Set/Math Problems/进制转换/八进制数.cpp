#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    while(cin >> x)
    {
        vector<int> answer;
        while (x != 0)
        {
            answer.push_back(x % 8);
            x /= 8;
        }
        for (int i = answer.size() - 1; i >= 0; i--)
        {
            cout << answer[i];
        }
        cout << endl;
    }
    

    return 0;
}