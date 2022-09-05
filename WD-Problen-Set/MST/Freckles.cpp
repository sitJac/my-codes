#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100;

struct Point
{
    double x;
    double y;
};

struct Edge
{
    int from;
    int to;
    double length;
};

Point point[MAXN];
Edge edge[MAXN * MAXN];
int father[MAXN];
int height[MAXN];

bool cmp(Edge a, Edge b)
{
    return a.length < b.length;
}

void Initial(int n)
{
    for (int i = 0; i <= n; i++)
    {
        father[i] = i;
        height[i] = 0;
    }
}

int Find(int x)
{
    if(father[x] != x)
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

double Kruskal(int n, int edgeNumber)
{
    Initial(n);
    sort(edge, edge + edgeNumber, cmp);
    double sum = 0;
    for (int i = 0; i < edgeNumber; i++)
    {
        Edge current = edge[i];
        if(Find(current.from) != Find(current.to))  //不连通
        {
            Union(current.from, current.to);
            sum += current.length;
        }    
    }
    return sum;
}

int main()
{
    int n;
    while (cin >> n)
    {
        if(n == 0)
        {
            break;
        }
        for (int i = 0; i < n; i++) //初始化points
        {
            cin >> point[i].x >> point[i].y;
        }
        int edgeNumber = n * (n - 1) / 2;
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                edge[k].from = i;
                edge[k].to = j;
                double len = pow((point[i].x - point[j].x), 2) + pow((point[i].y - point[j].y), 2);
                edge[k].length = pow(len, 0.5);
                k++;
            }
        }
        double answer = Kruskal(n, edgeNumber);
        printf("%.2lf\n", answer);
    }
    return 0;
}