#include <iostream>
#include <queue>
#define maxSize 1010
using namespace std;

int MGraph[maxSize][maxSize] = {0};
int N, L;

int BFS(int v, int L)
{
    queue<int> que;
    bool flags[maxSize] = {0};  //visited
    que.push(v);    
    flags[v] = 1;
    int curLayer = 1, nextLayer = 0, Layer = 0, count = 0;
    while (!que.empty() && Layer < L)
    {
        int v = que.front();
        que.pop();
        --curLayer;
        for (int i = 1; i <= N; i++)
        {
            if (!flags[i] && MGraph[v][i] != 0)
            {
                que.push(i);
                flags[i] = 1;
                ++count;
                ++nextLayer;
            }
        }
        if (curLayer == 0)
        {
            ++Layer;
            curLayer = nextLayer;
            nextLayer = 0;
        }
    }
    return count;
}

int main()
{
    cin >> N >> L;
    for (int i = 1; i <= N; i++)
    {
        int t, f;   //辅助输入每一行的信息
        cin >> t;
        while (t--)
        {
            cin >> f;
            MGraph[f][i] = 1; //由f指向i号顶点的边
        }
    }
    
    int k;
    cin >> k;
    int arr[k];
    for (int i = 0; i < k; i++)
    {
        int v;
        cin >> v;
        arr[i] = BFS(v, L); //L为限定的转发最高层次数
    }
    for (int i = 0; i < k; i++)
    {
        cout << arr[i];
        if (i < k - 1)
        {
            cout << endl;
        }
    }
    return 0;
}