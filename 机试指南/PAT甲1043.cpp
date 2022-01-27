#include<iostream>
#define maxSize 1010
using namespace std;

typedef struct BTNode
{
    struct BTNode* lChild;
    struct BTNode* rChild;
    int data;
};

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


