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

TreeNode* Insert(TreeNode* root, int x, int father)
{
    if(root == NULL)
    {
        root = new TreeNode(x);
        cout << father << endl;
    }
    else if(x < root->data)
    {
        root->leftChild = Insert(root->leftChild, x, root->data);
    }
    else
    {
        root->rightChild = Insert(root->rightChild, x, root->data);
    }
    return root;
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
            root = Insert(root, x, -1);
        }
        
    }
    return 0;
}