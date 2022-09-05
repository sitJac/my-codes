#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b)
{
    char *L = *((char**)a); //二级指针的强制类型转换
    char *R = *((char**)b);
    return strcmp(L, R);

}
int main()
{
    char *words[10] = 
    {
        "welcome",
        "to",
        "the",
        "coding",
        "world"
    };
    int n = 5;
    qsort(words, n, sizeof(char*), cmp);
    for (int i = 0; i < n; i++)
    {
        puts(words[i]);
    }
    
    return 0;
}