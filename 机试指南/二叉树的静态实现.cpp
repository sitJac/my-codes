/*
typedef struct BTNode
{
    int data;
    struct BTNode* lChild;
    struct BTNode* rChild;
}BTNode;
*/

//二叉树的静态化
typedef struct BTNode
{
    int data;
    int lChild;
    int rChild;
}BTNode;
BTNode nodes[5];
nodes[0].lChild = 1;
nodes[0].rChild = 2;
nodes[1].lChild = 3;
nodes[1].rChild = 4;
nodes[2].lChild = -1;
nodes[2].rChild = -1;
nodes[3].lChild = -1;
nodes[3].rChild = -1;
nodes[4].lChild = -1;
nodes[4].rChild = -1;
//知道A节点取B节点
nodes[nodes[0].lChild];
//构造一个节点，data域为F，并挂在K所指节点的右孩子的位置
nodes[5].data = 'F';
nodes[k].rChild = 5;
