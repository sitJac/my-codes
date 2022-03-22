#include<bits/stdc++.h>

using namespace std;

vector<int> graph[100000];    //临界表表示的图
int inDegree[1000];

vector<int> TopologicalSort(int n)
{
    vector<int> topology;       //拓扑序列
    //priority_queue<int> node;   //默认大顶堆
    priority_queue<int ,vector<int>, greater<int>> node;    //先输出小的
    for (int i = 0; i < n; i++)     //入度为零的结点入队
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
    int n;
    while(cin >> n){
        string str;
        memset(graph, 0, sizeof(graph));
        memset(inDegree, 0, sizeof(inDegree));
        for(int i = 0; i < n; ++i){
            getline(cin, str);
            int from = str[4] - '0';
            int to;
            if(str[6] == 'N'){
                continue;
            }
            else{
                for(int j = 10; j < str.size(); j+=6){
                    to = str[j] - '0';
                    graph[from].push_back(to);
                    inDegree[to]++;
                }
            }
        }
        vector<int> answer = TopologicalSort(n);
        for(int i = 0; i < answer.size(); i++){
            cout << "Task" << answer[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}