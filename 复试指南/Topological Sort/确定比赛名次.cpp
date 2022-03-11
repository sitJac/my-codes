#include<bits/stdc++.h>
using namespace std;

const int MAXN = 500;

vector<int> graph[MAXN];
int inDegree[MAXN];

vector<int> TopologicalSort(int n)
{
    vector<int> topology;       //拓扑序列
    //priority_queue<int> node;   //默认大顶堆
    priority_queue<int ,vector<int>, greater<int>> node;    //先输出小的
    for (int i = 1; i <= n; i++)     //入度为零的结点入队
    {
        if(inDegree[i] == 0)
        {
            node.push(i);
        }
    }
    while (!node.empty())
    {
        int u = node.top();
        topology.push_back(u);
        node.pop();
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
    return topology;
}

int main()
{
    int n, m;
    while(cin >> n >> m)
    {
        memset(graph, 0, sizeof(graph));
        memset(inDegree, 0, sizeof(inDegree));
        for(int i = 0; i < m; ++i)      //有向图初始化
        {
            int from, to;
            cin >> from >> to;
            graph[from].push_back(to);
            inDegree[to]++;
        }
        vector<int> answer = TopologicalSort(n); //传递参数 n个顶点
        for (int i = 0; i < answer.size(); i++)
        {
            if(i == n - 1)
            {
                cout << answer[i] << endl;
            }
            else
            {
                cout << answer[i] << " ";
            }
        }
    }
    return 0;
}