#include<bits/stdc++.h>
using namespace std;

char text[1000000];
char pattern[1000];
int prefix[1000];

void prefix_table(int n)
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

void moved_prefix_table(int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        prefix[i] = prefix[i - 1];
    }
    prefix[0] = -1;
}

int kmp_search(int m, int n)
{
    prefix_table(n);
    moved_prefix_table(n);
    int i = 0;
    int j = 0;
    while (i < m && j < n)
    {
        if(j == -1 || text[i] == pattern[j])
        {
            i++;
            j++;
        }
        else
        {
            j = prefix[j];
        }
    }
    if(j == n)
    {
        return i - j + 1;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int caseNum;
    cin >> caseNum;
    while(caseNum--)
    {
        int m, n;
        cin >> m >> n;
        for (int i = 0; i < m; i++)
        {
            cin >> text[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> pattern[i];
        }
        int res = kmp_search(m,n);
        cout << res << endl;
    }

    return 0;
}