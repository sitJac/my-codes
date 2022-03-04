#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        priority_queue< int, vector<int>, greater<int> > myPriorityQueue;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            myPriorityQueue.push(x);
        }
        int answer = 0;
        while (myPriorityQueue.size() > 1)
        {
            int a = myPriorityQueue.top();
            myPriorityQueue.pop();
            int b = myPriorityQueue.top();
            myPriorityQueue.pop();
            answer += a + b;
            myPriorityQueue.push(a + b);
        }
        cout << answer << endl;
    }
    return 0;
}