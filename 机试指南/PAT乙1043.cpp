#include <stdio.h>
#define maxSize 10001

int main()
{
    char s[maxSize];
    int count[200] = {};
    char dic[] = "PATest";

    gets(s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        count[(int)s[i]]++;
    }
    while (1)
    {
        int flag = 0;
        for (int i = 0; dic[i] != '\0'; i++)
        {
            if (count[(int)dic[i]] > 0) //hash: H(key) = (int)key
            {
                printf("%c", dic[i]);
                count[(int)dic[i]]--;
                flag = 1;
            }
            
        }
        if (flag == 0)  //用于检测某一个循环是否每次都做了想要的事
        {
            break;
        }
    }
    
    return 0;
}