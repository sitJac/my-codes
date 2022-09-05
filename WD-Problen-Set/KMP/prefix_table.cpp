#include<bits/stdc++.h>
using namespace std;

void prefix_table(char pattern[], int prefix[], int n)
{
    prefix[0] = 0;
    int len = 0;
    int i = 1;
    while (i < n)
    {
        if(pattern[i] == pattern[len])
        {
            len++;
            prefix[i] = len;
            i++;
        }
        else{
            if(len > 0)
            {
                len = prefix[len - 1];
            }
            else
            {
                prefix[i] = len;    //prefix[i] = 0;
                i++;
            }
        }
    }
}

void moved_prefix_table(int prefix[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        prefix[i] = prefix[i - 1];
    }
    prefix[0] = -1;
}

int main()
{
    char pattern[] = "ABABCABAA";   //模式串
    int prefix[9];                  //前缀数组   后移补-1的前缀数组
    int n = strlen(pattern);

    for(int i = 0; i < n; i++)          //打印模式串
    {
        cout << pattern[i] << " ";
    }
    cout << endl;

    prefix_table(pattern, prefix, n);   //打印前缀数组
    for (int i = 0; i < n; i++)
    {
        cout << prefix[i] << " ";
    }
    cout << endl;

    moved_prefix_table(prefix, n);      //打印移位补-1后的前缀数组
    for (int i = 0; i < n; i++)
    {
        cout << prefix[i] << " ";
    }

    return 0;
}