#include <bits/stdc++.h>

using namespace std;

const int MAX = 10000;
int father[MAX];    //父亲结点
int height[MAX];    //结点高度
int inDegree[MAX];  //入度
bool visited[MAX];  //标记

void Initial ()     //初始化
{
    for (int i = 0; i < MAX; ++i) 
    {
        father[i] = i;
        height[i] = 0;
        inDegree[i] = 0;
        visited[i] = false;
    }
}

int Find(int x)     //查找x的根结点
{
    if (x != father[x]) 
    {
        father[x] = Find(father[x]);
    }
    return father[x];
}

void Union(int x, int y)    //合并集合
{
    x = Find(x);
    y = Find(y);
    if (x != y)     //路径压缩
    {
        if (height[x] < height[y]) 
        {
            father[x] = y;
        } 
        else if (height[x] > height[y]) 
        {
            father[y] = x;
        } 
        else 
        {
            father[x] = y;
            height[y]++;
        }
    }
}

bool IsTree()   //判断是否符合树的定义：根结点入的为0 其余结点入度为1 所有结点属于同一集合
{
    bool flag = true;
    int component = 0;  //连通分量的数目
    int root = 0;       //根结点的数目

    for (int i = 0; i < MAX; ++i) 
    {
        if (!visited[i])
            continue;
        if (inDegree[i] == 0)
            root++;
        if (father[i] == i)
            component++;
        if (inDegree[i] > 1)    //如果某个结点的入度大于1，直接返回false
            return false; 
    }
    if (root != 1 || component != 1) //一棵树应该只有一个节点的入度等于0
    {
        flag = false;
    }
    if (root == 0 && component == 0)  //空树也是树...
    {
        flag = true;
    }
    return flag;
}


int main() {
    int a, b, k = 1;
    Initial();
    while (cin >> a >> b) {
        if (a == -1 && b == -1)
            break;
        if (a == 0 && b == 0) 
        {
            if (IsTree()) 
            {
                cout << "Case " << k++ <<" is a tree." << endl;
            } 
            else 
            {
                cout << "Case " << k++ <<" is not a tree." << endl;
            }
            Initial(); // 这里别忘记
        } 
        else 
        {
            Union(a, b);
            visited[a] = true;
            visited[b] = true;
            inDegree[b]++;
        }
    }
    return 0;
}
