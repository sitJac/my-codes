//线性结构-单链表
typedef struct LNode
{
    int data;
    struct LNode* next;
}LNode;

//分支结构-二叉树
typedef struct BTNode
{
    int data;
    struct LNode* lChild;
    struct LNode* rChild;
}BTNode;

