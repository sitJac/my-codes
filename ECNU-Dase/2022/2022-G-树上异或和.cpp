#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
    char data;
    TreeNode* leftNode;
    TreeNode* RightNode;
    TreeNode(char c): data(c), leftNode(NULL), RightNode(NULL){}
};

TreeNode* Build(string PreStr, string InStr)
{
    if(PreStr.size() == 0)
    {
        return NULL;
    }
    char current = PreStr[0];
    TreeNode* root = new TreeNode(current);

    int position = InStr.find(current); //寻找切分点

    root->leftNode = Build(PreStr.substr(1, position), InStr.substr(0,position));
    root->RightNode = Build(PreStr.substr(position+1), InStr.substr(position+1));
    return root;
}

void PostOrder(TreeNode *root)
{
    if(root == NULL)
    {
        return;
    }
    PostOrder(root->leftNode);
    PostOrder(root->RightNode);
    cout << root->data;
    return;
}

int main()
{
    int n;
    cin >> n;
    string PreStr;
    getline(cin, PreStr);
    PreStr.erase(' ');
    string InStr;
    getline(cin, InStr);
    PreStr.erase(' ');
    TreeNode* root = Build(PreStr, InStr);
    PostOrder(root);
    cout << endl;
    
    return 0;

}