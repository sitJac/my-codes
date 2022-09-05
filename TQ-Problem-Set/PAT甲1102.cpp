#include<iostream>
#include<queue>
#define maxSize 20
using namespace std;

struct BTNode
{
    int data;
    int lChild, rChild;
};

BTNode nodes[maxSize];

void levelOrder(int root)   //逆向层次遍历
{
    queue<int> q;
    if (root != -1)
        q.push(root);
    int flag = 0;   //辅助输出 控制最后一个节点的输出
    while (!q.empty())
    {
        int k = q.front();  //出队节点的地址
        if (!flag)
        {
            cout << nodes[k].data;
            flag = 1;   //flag用于判断第一个输出的节点前面不加空格，而其余的节点前面需要加空格
        }
        else
            cout << " " << nodes[k].data;
        q.pop();    //出队
        if (nodes[k].rChild != -1)  //注意是逆序输出
            q.push(nodes[k].rChild);
        if (nodes[k].lChild != -1)
            q.push(nodes[k].lChild);
    }
}
int flag = 0;
void inOrder(int root)  //逆向中序遍历
{
    if (root == -1)
        return ;
    inOrder(nodes[root].rChild);
    if (!flag)
    {
        cout << nodes[root].data;
        flag = 1;
    }
    else
        cout << " " << nodes[root].data;
    inOrder(nodes[root].lChild);
    
}

int main()
{
    int N;
    char lChar, rChar;
    int hash[maxSize] = {0};    //判断静态数组中哪一个节点是根节点
    for (int i = 0; i < maxSize; i++)
    {
        nodes[i].data = -1;
        nodes[i].lChild = -1;
        nodes[i].rChild = -1;
    }
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> lChar >> rChar;
        if (lChar != '-')
        {
            nodes[i].lChild = lChar - '0';  //字符型转化为整型
            hash[lChar - '0'] = 1;  //代表当前节点不是根节点
        }
        if (rChar != '-')
        {
            nodes[i].rChild = rChar - '0';
            hash[rChar - '0'] = 1;  //建立完树之后hash表中下标为0的节点为root
        }
        nodes[i].data = i;
    }
    int root;
    for (int i = 0; i < N; i++) //找根节点
    {
        if (hash[i] == 0)   //attention!!!
        {
            root = i;
            break;
        }
    }
    levelOrder(root);   //逆向层次遍历
    cout << endl;
    inOrder(root);  //中序逆向遍历序列

    return 0;
}