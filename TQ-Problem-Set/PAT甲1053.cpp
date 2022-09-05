#include <iostream>
#include <algorithm>
#define maxSize 110
using namespace std;

struct TNode
{
    int weight;
    int children[maxSize];
    int n;
};
TNode nodes[maxSize];   //节点数组
bool cmp(int a, int b)
{
    return nodes[a].weight > nodes[b].weight;
}
int N, M, S;    //N节点数 M非叶节点数 S要求的权值之和
int path[maxSize];

void DFS(int index, int numNode, int sum)
{
    if (sum > S)    //递归出口
        return;
    if (sum == S)
    {
        if (nodes[index].n != 0)    //不是叶子节点
            return;
        for (int i = 0; i < numNode; i++)
        {
            cout << nodes[path[i]].weight;
            if (i < numNode - 1)
                cout << " ";
            else
                cout << endl;
        }
        return ;
    }
    for (int i = 0; i < nodes[index].n; i++)    //深度优先遍历
    {
        int temp = nodes[index].children[i];
        path[numNode] = temp;
        DFS(temp,numNode + 1, sum + nodes[temp].weight);
    }
}

int main()
{
    cin >> N >> M >> S;
    for (int i = 0; i < N; i++)
    {
        cin >> nodes[i].weight;
        nodes[i].n = 0;
    }
    int ID, K, child;
    for(int i = 0; i < M; i++)
    {
        cin >> ID >> K;
        for (int j = 0; j < K; j++)
        {
            cin >> child;
            nodes[ID].children[nodes[ID].n++] = child;
        }
        sort(nodes[ID].children, nodes[ID].children + nodes[ID].n, cmp);
    }    
    DFS(0, 1, nodes[0].weight);
    return 0;
}