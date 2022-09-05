#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1000;

int father[MAXN];
int height[MAXN];

void Initial(int n)
{
    for (int i = 0; i <= n; i++)
    {
        father[i] = i;
        height[i] = 0;
    }
}

int Find(int x) //查找x的根节点
{
    if(x != father[x])
    {
        father[x] = Find(father[x]);
    }
    return father[x];
}

void Union(int x, int y)
{
    x = Find(x);
    y = Find(y);
    if(x != y)
    {
        if(height[x] < height[y])
        {
            father[x] = y;
        }
        else if(height[x] > height[y])
        {
            father[y] = x;
        }
        else
        {
            father[y] = x;
            height[x]++;
        }
    }
}

int main()
{
    int n, m;   //n个城市, m条路
    while (cin >> n)
    {
        if(n == 0)
        {
            break;
        }
        cin >> m;
        Initial(n);
        while (m--)
        {
            int x , y;
            cin >> x >> y;
            Union(x, y);
        }
        int answer = -1;
        for (int i = 1; i <= n; i++)
        {
            if(father[i] == i)
            {
                answer++;
            }
        }
        cout << answer << endl;
    }
    
    return 0;
}