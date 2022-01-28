#include<iostream>
#define maxSize 1010
using namespace std;

typedef struct BTNode
{
    struct BTNode* lChild;
    struct BTNode* rChild;
    int data;
}BTNode;

int N;
int preorder[maxSize];

void insert1(BTNode* &x, int a)
{
    if (x == NULL)
    {
        x = new BTNode();
        x->data = a;
        x->lChild = x->rChild = NULL;
    }
    else
    {
        if (a < x->data)
            insert1(x->lChild, a);
        else
            insert1(x->rChild, a);
    }
}

void insert2(BTNode* &x, int a)
{
    if (x == NULL)
    {
        x = new BTNode;
        x->data = a;
        x->lChild = x->rChild = NULL;
    }
    else
    {
        if (a >= x->data)
            insert2(x->lChild, a);
        else
            insert2(x->rChild, a);
    }
}

BTNode* buildTree1(BTNode* root, int index)
{
    while (index < N)
    {
        insert1(root, preorder[index]);
        index++;
    }
    return root;
}

BTNode* buildTree2(BTNode* root, int index)
{
    while (index < N)
    {
        insert2(root, preorder[index]);
        index++;
    }
    return root;
}

int flag1 = 1, M = 0;
void preOrder(BTNode* root) //先序遍历
{
    if (M<N && root->data!=preorder[M])
        flag1 = 0;
    M++;
    if(root->lChild != NULL)
        preOrder(root->lChild);
    if(root->rChild != NULL)
        preOrder(root->rChild);
}

int flag2 = 0;
void postOrder(BTNode* root)    //打印后序遍历的结果
{
    if(root->lChild != NULL)
        postOrder(root->lChild);
    if(root->rChild != NULL)
        postOrder(root->rChild);
    if (flag2 == 0)
    {
        cout << root->data;
        flag2 = 1;
    }
    else
        cout << " " << root->data;
}

int main()
{
    cin >> N;
    BTNode* root1 = new BTNode();
    root1->lChild = root1->rChild = NULL;
    root1->data = -1;
    BTNode* root2 = new BTNode();
    root2->lChild = root2->rChild = NULL;
    root2->data = -1;

    for (int i = 0; i < N; i++)
    {
        cin >> preorder[i];
        if (i == 0)
        {
            root1->data = preorder[0];
            root2->data = preorder[0];
        }
    }

    buildTree1(root1, 1);
    preOrder(root1);
    if (flag1)
    {
        cout << "YES" << endl;
        postOrder(root1);
    }
    else
    {
        flag1 = 1, M = 0;
        buildTree2(root2, 1);
        preOrder(root2);
        if (flag1)
        {
            cout << "YES" <<endl;
            postOrder(root2);
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}