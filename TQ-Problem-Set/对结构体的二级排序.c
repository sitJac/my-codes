#include <stdio.h>
#include <stdlib.h>

typedef struct structTest
{
    int a;
    int b;
}structTest;

int cmp(const void *a, const void *b)
{
    int L = ((structTest*)a) -> a;
    int R = ((structTest*)b) -> a;
    if (L < R)
        return -1;
    else if (L == R)
    {
        int l = ((structTest*)a) -> b;
        int r = ((structTest*)b) -> b;
        return l - r;
    }
    else
        return 1;
}

int main()
{
    structTest structArray[5] =
    {
        {1, 2},
        {0, 3},
        {2, 1},
        {5, 1},
        {-1, 0}
    };
    int n = 5;
    qsort(structArray, n, sizeof(structArray[0]), cmp);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", structArray[i].a, structArray[i].b);
    }
    
    return 0;
}