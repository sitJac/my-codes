#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : 
        val(x), left(nullptr), right(nullptr) {

    }
};

//二叉树的深度
int TreeDepth(TreeNode* pRoot) {
    if(pRoot == nullptr) {
        return 0;
    }
    int l = 0;
    int r = 0;
    if(pRoot->left) {
        l = TreeDepth(pRoot->left);
    }
    if(pRoot->right) {
        r = TreeDepth(pRoot->right);
    }
    return max(l,r)+1;
}

//二叉树的镜像
TreeNode* Mirror(TreeNode* pRoot) {
    if(pRoot == nullptr) {
        return nullptr;
    }
    TreeNode* left = Mirror(pRoot->left);
    TreeNode* right = Mirror(pRoot->right);
    pRoot->left = right;
    pRoot->right = left;
    return pRoot;
}

int main() {
    return 0;
}