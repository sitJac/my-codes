//reverse a sequence 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    stack<long long> mystack;
    cin >> n;
    while (n--)
    {
        long long x;
        cin >> x;
        mystack.push(x);
    }
    while (!mystack.empty())
    {
        cout << mystack.top() << " ";
        mystack.pop();
    }
    return 0;
}