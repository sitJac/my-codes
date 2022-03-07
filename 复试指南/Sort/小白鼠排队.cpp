#include<bits/stdc++.h>
using namespace std;

struct mouse
{
    int weight;
    string hat;
};

mouse m[100];

bool cmp(mouse a, mouse b)
{
    return a.weight > b.weight;
}

int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> m[i].weight >> m[i].hat;
        }
        sort(m, m + n, cmp);
        for (int i = 0; i < n; i++)
        {
            cout << m[i].hat << endl;
        }
        
    }
    
    return 0;
}