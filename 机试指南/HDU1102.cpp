#include<iostream>
#include<algorithm>
using namespace std;

typedef struct Road
{
    int a, b;
    int w;
}Road;
int n, v[105];  //n输入的数的规模 v并查集

bool cmp(Road a, Road b)    //按照路的长度从小到大排序
{
    return a.w < b.w;
}

int getRoot(int a)  //在并查集中求某一个节点的根节点
{
    while (a != v[a])
        a = a[v];
    return a;
}

int main()
{
    Road roads[10010];
    while (cin >> n)
    {
        int a[103][103];
        int k = 0;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        int t;
        cin >> t;
        while (t--)
        {
            int x, y;
            xin >> x >> y;
            a[x][y] = 0;
        }
        for (int i = 1; i <= n; i++)
            for (int j = i+1; j <= n; j++)
            {
                roads[k].a = i;
                roads[k].b = j;
                roads[k].w = a[i][j];
                k++;
            }
        for (int i = 1; i < 105; i++)
        {
            v[i] = i;
        }
        sort(roads, roads+k, cmp);
        int s = 0;
        for (int i = 0; i < k; i++)
        {
            int x1 = getRoot(roads[i].a);
            int x2 = getRoot(roads[i].b);
            if (x1 != x2)
            {
                s += roads[i].w;
                v[x1] = x2;
            }
        }
        cout << s << endl;
    }
    return 0;
}