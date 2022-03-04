#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
    char data;
    TreeNode* leftChild;
    TreeNode* rightChild;
    TreeNode(char c) : data(c), leftChild(NULL), rightChild(NULL){}
};

/*引用传递参数：
引用实际上是某一个变量的别名和这个变量具有相同的内存空间
实参把变量传递给形参引用，相当于形参是实参的别名，对形参的修改都是直接修改实参*/
TreeNode* Build(int& position, string str)  
{
    char current = str[position++];
    if(current == '#')
    {
        return NULL;
    }
    TreeNode* root = new TreeNode(current);
    root->leftChild = Build(position, str);
    root->rightChild = Build(position, str);

    return root;
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


int main()
{
    string str;
    while (cin >> str)
    {
        int position = 0;   //position标记字符串处理的位置
        TreeNode* root = Build(position, str);
        InOrder(root);
        cout << endl;
    }
    
    return 0;
}