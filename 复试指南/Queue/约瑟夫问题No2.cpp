#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, m;//n个孩子 从p开始 报数m个
    while (cin >> n >> p >> m)
    {
        if(n == 0 && p == 0 && m == 0)
        {
            break;
        }
        queue<int> children;
        for (int i = 1; i <= n; i++)    //依次加入队列
        {
            children.push(i);
        }
        for (int i = 1; i < p; i++)     //使得编号为p的小朋友在队首
        {
            children.push(children.front());
            children.pop();
        }
        while (!children.empty())
        {
            for (int i = 1; i < m; i++)     //将前m-1个小朋友重新入队
            {
                children.push(children.front());
                children.pop();
            }
            if(children.size() == 1)
                cout << children.front() << endl;
            else
                cout << children.front() << ",";
            children.pop();
        }
    }
    return 0;
}