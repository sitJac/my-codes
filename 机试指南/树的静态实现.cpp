typedef struct 
{
    int data;
    int children[maxSize];  //一对多 
    int n;  //n个孩子
}TNode;

TNode nodes[maxSize];