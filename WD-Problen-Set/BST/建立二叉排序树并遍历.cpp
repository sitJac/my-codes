#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100;

struct TreeNode
{
    int data;
    TreeNode* leftChild;
    TreeNode* rightChild;
    TreeNode(int x) : data(x), leftChild(NULL), rightChild(NULL){}
};

TreeNode* Insert(TreeNode* root, int x)
{
    if(root == NULL)
    {
        root = new TreeNode(x);
    }
    else if(x < root->data)
    {
        root->leftChild = Insert(root->leftChild, x);
    }
    else if(x > root->data)
    {
        root->rightChild = Insert(root->rightChild, x);
    }
    return root;
}

void PreOrder(TreeNode* root)
{
    if(root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    PreOrder(root->leftChild);
    PreOrder(root->rightChild);
    return ;
}

void InOrder(TreeNode* root)
{
    if(root == NULL)
    {
        return ;
    }
    InOrder(root->leftChild);
    cout << root->data << " ";
    InOrder(root->rightChild);
    return ;
}

void PostOrder(TreeNode* root)
{
    if(root == NULL)
    {
        return ;
    }
    PostOrder(root->leftChild);
    PostOrder(root->rightChild);
    cout << root->data << " ";
    return ;
}

int main()
{
    int n;
    while (cin >> n)
    {
        TreeNode* root = NULL;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            root = Insert(root, x);
        }
        PreOrder(root);
        cout << endl;
        InOrder(root);
        cout << endl;
        PostOrder(root);
        cout << endl;
    }
    
    return 0;
}