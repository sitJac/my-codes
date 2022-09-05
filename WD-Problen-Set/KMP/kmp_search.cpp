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

void kmp_search(char text[], char pattern[])
{
    //text[i]       len[text]    = m
    //pattern[j]    len[pattern] = n

    int n = strlen(pattern);
    int m = strlen(text);
    int i = 0, j = 0;
    int prefix[n];
    prefix_table(pattern, prefix, n);
    moved_prefix_table(prefix, n);
    
    while (i < m)
    {
        if(j == n - 1 && text[i] == pattern[j])   //遍历完整个pattern 查找成功
        {
            cout << "Found pattern at " << i - j << endl;
            j = prefix[j];
        }
        if(pattern[j] == text[i])       //匹配成功
        {
            i++;
            j++;
        }
        else                           //匹配失败
        {
            j = prefix[j];             //根据prefix移位
            if(j == -1)
            {
                i++;
                j++;
            }
        }
    }
}

int main()
{
    char pattern[] = "ABABCABAA";
    char text[] = "ABABABCABAABABABAB";

    kmp_search(text, pattern);

    return 0;
}