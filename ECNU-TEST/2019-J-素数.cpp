#include<bits/stdc++.h>
using namespace std;

int Value(int num)  //价值=质因数的个数
{
    set<int> s;
    for(int i = 1; i <= num; i ++)
    {
        if(num % i == 0)
        {
            s.insert(i);
        }
    }
    int res = s.size();
    return res;
}

int main()
{
    int n;
    cin >> n;
    int value;
    for(int i = 1; i <= n; ++i)
    {
        value += Value(i);
    }
    cout << value;
    return 0;
}