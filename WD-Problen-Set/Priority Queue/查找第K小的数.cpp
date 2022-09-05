#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    int temp;
    while (cin >> n)
    {
        priority_queue<int, vector<int>, greater<int>> myQueue;//先输出小的
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            myQueue.push(temp);
        }
        cin >> k;
        if(k == 1)
        {
            cout << myQueue.top();
        }
        else    //找到第k小的数 重复的算同一个
        {
            int counter = 1;
            int pre = myQueue.top();
            myQueue.pop();
            while (counter <= k)
            {
                int current = myQueue.top();
                if(current != pre)
                    counter++;
                if(counter == k)
                    break;
                myQueue.pop();
                pre = current;
            }
            cout << myQueue.top() << endl;
        }
    }
    return 0;
}