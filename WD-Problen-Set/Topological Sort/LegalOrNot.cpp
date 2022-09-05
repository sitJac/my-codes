#include<bits/stdc++.h>
using namespace std;

const int MAXN = 500;

vector<int> graph[MAXN];    //有向无环图
int inDegree[MAXN];         //入度

bool TopologicalSort(int n) //拓扑排序
{
    queue<int> node;
    for (int i = 0; i < n; i++) //入度为0的结点入队
    {
        if(inDegree[i] == 0)
        {
            node.push(i);
        }
    }
    int number = 0;     //拓扑序列的结点个数
    while (!node.empty())
    {
        int u = node.front();
        node.pop();
        number++;       //拓扑序列节点数目加一
        for (int i = 0; i < graph[u].size(); i++)
        {
            int v = graph[u][i];
            inDegree[v]--;
            if(inDegree[v] == 0)
            {
                node.push(v);
            }
        }
    }
    return n == number;
}

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        if(m == 0 && n == 0)
        {
            break;
        }
        memset(graph, 0, sizeof(graph));        //初始化图
        memset(inDegree, 0, sizeof(inDegree));  //初始化入度
        while (m--)
        {
            int from, to;
            cin >> from >> to;
            graph[from].push_back(to);
            inDegree[to]++;
        }
        if(TopologicalSort(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}