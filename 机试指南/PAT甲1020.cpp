#include<iostream>
#include<queue> //cpp提供的队列的封装
using namespace std;

typedef struct BTNode
{
    int data;
    struct BTNode *LChild = NULL;
    struct BTNode *RChild = NULL;
}BTNode;

int postOrder[50];  //后序遍历序列
int inOrder[50];    //中序遍历序列
queue<BTNode*> levelOrder;

BTNode* create(int postL, int postR, int inL, int inR)   //根据后序和中序建立一个二叉树
{
    if (postL <= postR)
    {
        BTNode* root = new BTNode;  //申请了一个BTNode的节点空间，并把这个空间的地址赋值给root（用root指针指向这片地址空间）
        root->data = postOrder[postR];  //后序遍历序列的最后一个值就是根节点
        int i;
        for (i = inL; i <= inR; i++)
        {
            if (inOrder[i] == postOrder[postR])
            {
                break;
            }
        }
        int num = i - inL;
        root->LChild = create(postL, postL + num - 1, inL, i - 1);
        root->RChild = create(postL + num, postR - 1, i + 1, inR);
        return root;
    }
    else
        return NULL;
}

void level(BTNode* root, int N)
{
    int n = 0;
    levelOrder.push(root);
    while (levelOrder.size() != 0)
    {
        BTNode* temp = levelOrder.front();
        levelOrder.pop();
        n++;
        if (n == N)
            cout << temp->data;
        else
            cout << temp->data << ' ';
        if (temp->LChild != NULL)
            levelOrder.push(temp->LChild);
        if (temp->RChild != NULL)
            levelOrder.push(temp->RChild);
    }
}

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int d;
        cin >> d;
        postOrder[i] = d;
    }
    for (int i = 0; i < N; i++)
    {
        int d;
        cin >> d;
        inOrder[i] = d;
    }
    BTNode *Btree = create(0, N-1, 0, N-1);
    level(Btree, N);
}