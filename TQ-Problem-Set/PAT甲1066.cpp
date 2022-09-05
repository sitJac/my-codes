#include <iostream>

using namespace std;

typedef struct BTNode
{
    int data;
    struct BTNode *lChild, *rChild;
}BTNode;

BTNode *rotateL(BTNode *root)   //左旋操作
{
    BTNode *t = root->rChild;
    root->rChild = t->lChild;
    t->lChild = root;
    return t;
}

BTNode *rotateR(BTNode *root)   //右旋操作
{
    BTNode *t = root->lChild;
    root->lChild = t->rChild;
    t->rChild = root;
    return t;
}

BTNode *rotateLR(BTNode *root)  //先左旋后右旋
{
    root->lChild = rotateL(root->lChild);
    return rotateR(root);
}

BTNode *rotateRL(BTNode *root)  //先右旋后左旋
{
    root->rChild = rotateR(root->rChild);
    return rotateL(root);
}

int getHeight(BTNode *root) //获得树的高度
{
    if (root == NULL)
    {
        return 0;
    }
    return max(getHeight(root->lChild), getHeight(root->rChild)) + 1; //根节点所占的高度为一
    //return (LHight > RHight ? LHight : RHight) + 1;
}

void insert(BTNode *&root, int data)    //插入建立平衡二叉树
{
    if (root == NULL)
    {
        root = new BTNode();
        root->lChild = NULL;
        root->rChild = NULL;
        root->data = data;
    }
    else if (data < root->data)
    {
        insert(root->lChild, data);
        if (getHeight(root->lChild) - getHeight(root->rChild) == 2)
        {
            root = data < root->lChild->data ? rotateR(root) : rotateLR(root); 
        }
    }
    else
    {
        insert(root->rChild, data);
        if (getHeight(root->lChild) - getHeight(root->rChild) == -2)
        {
            root = data < root->rChild->data ? rotateRL(root) : rotateL(root);
        }
    }
}

int main()
{
    int N, data;
    cin >> N;
    BTNode *root = NULL;
    for (int i = 0; i < N; i++)
    {
        cin >> data;
        insert(root, data);
    }
    cout << root->data;

    return 0;
}