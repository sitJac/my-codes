#include <stdio.h>
#include <string.h>

void yangTri(int m[], int n[], int level, int lim)
{
    int i;

    for(i = 1; i <= level-1; i++)   // 输出上一层
        printf("%d ", m[i]);
    putchar('\n');

    if(level > lim) // 停止条件
        return;

    for(i = 1; i <= level; i++) // 计算当前层
        n[i] = m[i]+m[i-1];

    yangTri(n, m, level+1, lim);
}

int main()
{
    int a[31], b[31];
    int n;
    int i;

    while(scanf("%d", &n) != EOF)
    {
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        a[1] = 1;   // 0位空出
        i = 2;  // 从第二层开始计算

        yangTri(a, b, i, n);
        putchar('\n');
    }
    return 0;
}