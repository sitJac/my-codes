#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1000010;

int father[MAXN];
int height[MAXN];
bool visit[MAXN];

void Initial() //并查集初始化
{
    for (int i = 0; i < MAXN; i++)
    {
        father[i] = i;
        height[i] = 0;
        visit[i] = false;
    }
}

int Find(int x) //找到根节点
{
    if(x != father[x])
    {
        father[x] = Find(father[x]);
    }
    return father[x];
}

void Union(int x, int y)  //并查集的合并操作
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
    Initial();
    int x, y;
    int maxNum = 0;
    while (cin >> x >> y)
    {
        Union(x, y);
        visit[x] = true;
        visit[y] = true;
        maxNum = maxNum > x ? maxNum : x;
        maxNum = maxNum > y ? maxNum : y;
    }
    int component = 0;
    for (int i = 1; i <= maxNum; i++)
    {
        if(!visit[i])
        {
            continue;
        }
        if(father[i] == i)
        {
            component++;
        }
    }
    cout << component << endl;
    
    return 0;
}