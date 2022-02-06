#include<iostream>
#define N 1001
using namespace std;

int v[N];   //保存并查集
//属于同一个树的顶点属于同一个集合
int getRoot(int x)
{
    while(v[x]!=x)
        x = v[x];
    return x;
}

int main()
{
    int n, m;
    int x, y;
    while (cin >> n >> m && n)  //当输入的n为0时退出
    {
        for (int i = 1; i <= n; i++) //初始化并查集
        {
            v[i] = i;
        }
        while (m--) //m次循环输入m条边
        {
            cin >> x >> y;
            x = getRoot(x); //并查集中合并两个集合
            y = getRoot(y);
            if (x != y)
            {
                v[x] = y;
            }
        }
        int count = -1;
        for (int i = 1; i <= n; i++)
        {
            if (v[i] == i)
            {
                count++;
            }
        }
        cout << count <<endl;
    }
    return 0;
}

//并查集：判断哪些顶点属于同一个集合