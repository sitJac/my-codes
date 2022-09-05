//对int double float型数组元素的排序
//qsort(指向要排序的数组的第一个元素的指针， 数组中元素个数， 数组中每个元素的大小, compar用来比较两个元素的函数)
#include <stdio.h>
#include <stdlib.h>
#define maxSize 10

int cmp(const void *a, const void *b)
{
    int L = *((int*)a);
    int R = *((int*)b);
    if (L > R)
        return 1;
    else if(L == R)
        return 0;
    else
        return -1;
    
    //return *( (int*)a) - *( (int*)b);
}

int main()
{
    int arr[10] = {1, 2, 0, -1, 3, -9, 12, 1, 2, 10};
    int n = 10;
    qsort(arr, n, sizeof(arr[0]), cmp);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}